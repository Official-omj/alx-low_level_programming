#include "main.h"
/**
 * _strcat - appends src to dest string
 * @dest: string that src will be appended on
 * @src: string to append on dest
 * Return: return dest
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (dest[a] != 0)
	{
		a++;
	}

	b = 0;

	while (src[b] != 0)
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	return (dest);
}
