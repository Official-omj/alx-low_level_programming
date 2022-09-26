#include "main.h"
/**
 * _memset - fills memory with constant byte
 *
 * @s: pointer to the memory area
 * @b: constant byte to fill with
 * @n: num bytes to fill in
 *
 * Return: the memory area of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *start = s;

	while (i < n)
	{
		*s++ = b;
		i++;
	}
	return (start);
}
