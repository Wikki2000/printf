#include "main.h"
/**
 * print_handle - print unsigned, octal and hexadecimal
 * @num: an unsigned number
 * @c: a charcter
 * Return: number of character
 */
int print_handle(unsigned int num, char c)
{
	int count = 0;

	if (c == 'u')
		count = 1 + (print_unsigned(num));
	else if (c == 'o')
		count = 1 + (print_octal(num));
	else if (c == 'X')
		count = 1 + (print_HEXADECIMAL(num));
	else if (c == 'x')
		count = 1 + (print_hexadecimal(num));
	return (count);
}
