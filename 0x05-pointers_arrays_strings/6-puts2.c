#include "holberton.h"
/**
 * puts2 - prints even indeces
 *
 * @str: pointer to a character array
 *
 * Description: prints even indeces
 * Return: nothing
 */

void puts2(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		if (index % 2 == 0)
			putchar(str[index]);
		index++;
	}
	putchar('\n');

}
