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

  for (i = 'a'; i <= 'z'; i++)
  putchar(i);

  for (i = 'A'; i <= 'Z'; i++)
  putchar(i);
  putchar('\n');

  return (0);
}
