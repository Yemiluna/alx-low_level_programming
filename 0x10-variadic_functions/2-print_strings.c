#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - printsstrings followed by a new line
 * @separator: string that separates the strings
 * @n: number of strings passed to the function
 *Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strlist;
	unsigned int i;
	char *p;

	va_start(strlist, n);

	for (i = 0; i < n; i++)
	{
		p = va_arg(strlist, char*);
		if (p == NULL)
			printf("(nil)");
		else
			printf("%S", p);
		if (separator == NULL || i == n - 1)
			continue;
		else
			printf("%s", separator);
	}
	va_end(strlist);
	printf("\n");
}
