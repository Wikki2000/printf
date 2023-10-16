#include "main.h"

/**
 * print_hexadecimal - Print hexadecimal in lowercase
 * @decimal: The value to be printed in hexadecimal
 *
 * Return: The count of the printed characters
 */
int print_hexadecimal(int decimal)
{
	int rem, count = 0;
	char hex_digit;

	rem = decimal % 16;
	(rem < 0) ? (hex_digit = rem + '0') : (hex_digit = rem - 10 + 'a');

	/* Base condition for recursive call */
	if (decimal == 0)
		return (0);

	/* Recursively calling the function */
	else
		count = 1 + print_hexadecimal(decimal / 16);
	_putchar(hex_digit);

	return (count);
}

/**
 * print_HEXADECIMAL - Print hexadecimal in uppercase
 * @decimal: The value to be printed in hexadecimal
 *
 * Return: The count of the printed characters
 */
int print_HEXADECIMAL(int decimal)
{
	int rem, count = 0;
	char hex_digit;

	rem = decimal % 16;
	(rem < 0) ? (hex_digit = rem + '0') : (hex_digit = rem - 10 + 'A');

	if (decimal == 0)
		return (0);

	else
		count = 1 + print_HEXADECIMAL(decimal / 16);
	_putchar(hex_digit);
	return (count);
}
