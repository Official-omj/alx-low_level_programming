#include "main.h"

/**
 * _strncat - appends src to the dest string
 * @dest: string to append by src
 * @src: string to append to dest
 * @n: largest number of bytes to append
 * Return: address of dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int c;
	int d;

	c = 0;

	while (dest[c] != 0)
	{
		c++;
	}

	d = 0;

	while (src[c] != 0 && d < n)
	{
		dest[c] = src[d];
		c++;
		d++;
	}
	return (dest);
}
