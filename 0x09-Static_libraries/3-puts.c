#include "holberton.h"

/**
 *_puts - a function to print strings.
 *@str: a string value to be printed,
 *Return: void doesnt have return value.
 */

void _puts(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
		_putchar('\n');
		break;
		}
		_putchar(str[count]);
		count++;
	}
}
