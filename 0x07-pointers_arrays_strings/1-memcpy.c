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
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
