#include "main.h"

/**
 * main - Prints first 52 Fibonacci numbers, starting with 1 and 2,
 * separated by comma followed by a space.
 *
 * Return: Nothing!
 */
int main(void)
{
	int i = 0;
	long j = 1, k = 2;

	while (i < 50)
	{
		if (i == 0)
			printf("%1d", j);
		else if (i == 1)
			printf(", %1d", k);
		else
		{
			k += j;
			j = k - j;
			printf(", %1d", k);
		}

		++i;
	}

	printf("\n");
	return (0);
}
