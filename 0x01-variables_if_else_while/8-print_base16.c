#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - starting point of the program
 *
 * Description: prints alphabets from a to z
 * Return: 0 if program executes properly, else a non-zero number
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (i = 'a'; i <= 'f'; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
