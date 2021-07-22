#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - printsstrings followed by a new line
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 *Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *cp;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		cp = va_arg(valist, char*);
		if (cp != NULL)
			printf("%s", cp);
		else
			printf("%p", cp);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
