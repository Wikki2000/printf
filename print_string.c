#include "main.h"

/**
 * print_string  - count the length of a string
 * @str: a string
 * Return: length of string
 */
int print_string(char *str)
{
	int len = 0;

	if (str == NULL)
		return (-1);
	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	return (len);
}
