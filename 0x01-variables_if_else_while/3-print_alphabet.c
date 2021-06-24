  GNU nano 4.8                                                   3-print_alphabet.c
#include <stdio.h>
/**
* main - main block
* Description: Use `putchar` to print lowercase and then uppercase alphabet.
* Return: 0
*/
int main(void)
{
char c = 'a';

while (c <= 'z')
{
putchar(c);
c++;
}

c = 'A';

while (c <= 'Z')
{
putchar(c);
c++;
}
putchar('\n');

return (0);
}
