#include "holberton.h"
/**
 * _isalpha - check if input is alphabet.
 * @c:  charhacter
 * Return: Always 0.
 */

int _isalpha(int c)
{
	if ((c >= 65) && (c <= 122))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
