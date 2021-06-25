#include "holberton.h"
/**
 * print_alphabet - print alphabet using the header prototype.
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');

}
