#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a coppy of the string given as a parameter
 * @str: string to duplicate
 * Return: pointer to duplicated string in allocated memory
 */

char *_strdup(char *str)
{
	char *ptr = str;
	int count = 0;

	if (str == NULL)
		return (NULL);

	while (*ptr++ != '\0')
		count = count + 1;

	ptr = malloc((count + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	count = 0;
	while (*str)
		ptr[count++] = *str++;

	ptr[count] = *str;

	return (ptr);
}
