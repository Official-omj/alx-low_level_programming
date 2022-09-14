#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character.
 * @c: parameter member c
 * Return: returns 1 0r 0 if success
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
