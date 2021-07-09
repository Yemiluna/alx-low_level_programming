#include "holberton.h"

/**
 *_strcmp - a function to compare two strings.
 *@s1: a string value
 *@s2: another string value
 *Return: returns a value
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int R;

	i = 0;

	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	R = s1[i] - s2[i];
	return (R);
}
