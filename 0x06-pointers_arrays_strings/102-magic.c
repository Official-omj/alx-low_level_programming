#include <stdio.h>
/**
 * main - prints given code line follwed by new line
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	 * write your line of code here...
	 */

	(p + 5) = 98;
	/* ...so that this will print 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
