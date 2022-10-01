#include "main.h"
/**
 * _memset - function that fills memory with constant byte
 *
 * @s: pointer to the memory area
 * @b: constant byte to fill with
 * @n: num bytes to fill in
 *
 * Return: dest address
 */
char *_memset(char *s, char b, unsigned int n)
{	unsigned int count = 0;
	for (count = 0; count < n; count++)
	{
		*(s + count) = b;
	}

	return (s);
}
