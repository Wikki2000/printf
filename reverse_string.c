#include "main.h"

/**
 * print_reverse - Print string in reverse order
 * @str: Pointer to the string to be print in reverse order
 *
 * Return: The number of the printed string
 */
int print_reverse(char *str)
{
	int len, i, count = 0;

	if (str == NULL)
		return (0);

	len = _strlen(str);

	for (i = len - 1; i >= 0; i++)
	{
		_putchar(str[i]);
		count++;
	}

	return (count);
}
