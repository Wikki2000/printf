#include "main.h"

/**
 * print_non_printable - print non printable character
 * @str: a string
 * Return: number of characters printed
 */

int print_non_printable(char *str)
{
	int i = 0, count = 0, val = 0;

	if (str == NULL)
		return (-1);
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			count += 2;
			val = str[i];
			if (val < 16)
			{
				_putchar('0');
				count += 1;
			}
			count += print_HEXADECIMAL(val);
		}
		else
		{
			_putchar(str[i]);
			count++;
		}
		i++;
	}
	return (count);
}
