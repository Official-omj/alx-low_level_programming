#include "main.h"
/**
 * _Islower - founction to check for lowercase character
 * @c: is the int that will use for the argument of the function
 * Return: 0
 */
int _Islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
