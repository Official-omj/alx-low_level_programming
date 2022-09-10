#include <stdio.h>

/ betty style doc for function main goes there /
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char I;

	i = 48;
	while (i < 58)
{
	putchar(i);
	i++;
}
	I = 'a';
	while (I <= 'f')
{
	putchar(I);
	I++;
}
	putchar('\n');
	return (0);
}
