#include "main.h"

/**
 * print_handle - print unsigned, octal and hexadecimal
 * @num: an unsigned number
 * @c: a charcter
 * Return: number of character
 */

int print_handle(unsigned int num, char c)
{
	if (c == 'u')
		return (print_unsigned(num));
	else if (c == 'o')
		return (print_octal(num));
	else if (c == 'X')
		return (print_HEXADECIMAL(num));
	else if (c == 'x')
		return (print_hexadecimal(num));
	else
		return (-1);
}
