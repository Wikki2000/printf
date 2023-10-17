#include "main.h"
/**
 * print_unsigned_and_octal - handle unsigned and octal
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
	else
		return (-1);
}
