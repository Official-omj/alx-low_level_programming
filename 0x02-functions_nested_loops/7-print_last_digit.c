#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @n: parameter member n
 * Return: Value of the last digit.
 */
int print_last_digit(int n)
{
	int last-digit = n % 10;
	
	if (last_digit < 0)
		last_digit *= -1;

	putchar(last_digit) * '0');

	return (last_digit);	
}
