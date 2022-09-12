#include <stdio.h>
/**
 * main - Entry point
 * Description: A program that prints all possible combinations
 * of a two digit number.
 * Return: 0
 */
int main(void)
{
	int i;
	int j;

	i = 48;
	j = 49;
	while ((i < 57) && (j < 58))
	{
		putchar(i);
		putchar(j);
		if ((i == 56) && (j == 57))
		{
			putchar('\n');
			i++;
			j++;
		}
		else
		{
			putchar(44);
			putchar(32);
			if (j < 57)
			{
				j++;
			}
			else
			{
				i++;
				j = 1 + i;
			}
		}
	}
	return (0);
}

