#include "main.h"

/**
 * _calloc - allocates memory for nmemb byte elements
 * @nmemb: number of elements inthe array
 * @size: bytes for each position in the array
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);

p = malloc(nmemb * size);
if (p == NULL)
return (NULL);

for (i = 0; i < nmemb * size; i++)
p[i] = 0;

return (p);

}
