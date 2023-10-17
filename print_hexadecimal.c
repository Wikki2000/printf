#include "main.h"

/**
 * print_hexadecimal - Print hexadecimal in lowercase
 * @decimal: The value to be printed in hexadecimal
 *
 * Return: The count of the printed characters
 */
int print_hexadecimal(unsigned int decimal)
{
	int rem, count = 0;
	char hex_digit[] = "0123456789abcdef";

	if (decimal <= 15)
	{
		_putchar(hex_digit[decimal]);
		return (1);
	}
	else
	{
		count = 1 + print_hexadecimal(decimal / 16);
		rem = decimal % 16;
		_putchar(hex_digit[rem]);
	}

	return (count);
}

/**
 * print_HEXADECIMAL - Print hexadecimal in uppercase
 * @decimal: The value to be printed in hexadecimal
 *
 * Return: The count of the printed characters
 */
int print_HEXADECIMAL(unsigned int decimal)
{
	int rem, count = 0;
	char *hex_digit = "0123456789ABCDEF";

	if (decimal <= 15)
	{
		_putchar(*(hex_digit + decimal));
		return (1);
	}

	else
	{
		count = 1 + print_hexadecimal(decimal / 16);
		rem = decimal % 16;
		_putchar(*(hex_digit + rem));
	}

	return (count);
}
