#include "main.h"

/**
 * print_unsigned - print an unsigned integer number
 * @num: an unsigned int number
 * Return: number of characters printed
 */
int print_unsigned(unsigned int num)
{
	int count = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	else if (num / 10 != 0)
		count +=  print_unsigned(num / 10);
	_putchar('0' + (num % 10));
	count++;
	return (count);
}

/**
 * print_octal - prints octal number
 * @num: an unsigned int number
 * Return: number of characters printed
 */
int print_octal(unsigned int num)
{
	int count = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	if (num <= 7)
	{
		_putchar('0' + num);
		return (1);
	}
	count = 1 + print_octal(num / 8);
	_putchar('0' + (num % 8));
	return (count);
}
