#include "main.h"

/**
 * _strlen_recursion - returns the lenght of a string
 * @s: string
 *
 * Return: lenght of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++
	return (_strlen_recursion(s) + 1);
}
