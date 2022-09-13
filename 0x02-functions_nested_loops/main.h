
int_putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int_islower(int c);
int_isalpha(int c);
int print_sign(int n);
int_abs(int);
int print_last_digit(int);
void jack_bauer(void);
void times_table(void)
int add(int, int);
void print_to_98(int n);
void print_times_table(int n);

vim 0-putchar.c

#include <stdio.h>
/**
 * main - Entry point
 * code description
 * Return: Always 0 (Success)
 */
int main(void)

{
	putchar('_');
	putchar('p');
	putchar('u');
	putchar('t');
	putchar('c');
	putchar('h');
	putchar('a');
	putchar('r');
	putchar('\n');
	return (0);
}
