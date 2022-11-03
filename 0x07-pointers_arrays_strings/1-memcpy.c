#include "main.h"

/**
 * _memcopy - copies memory area
 * @dest: dest memory area
 * @src: src memory area
 * @n: bytes from memory area to copy
 * Return: memory area replaced
 */
char *_memcopy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] =  src[a];
	}
}
