#include "main.h"

/**
 * print_unsigned - print an unsigned integer number
 * @num: an unsigned int number
 * Return: number of characters printed
 */
int print_unsigned(unsigned int num)
{
	unsigned int count = 0, rev = 0, rem = 0, len = 0;

	if (num == 0)
	{
		putchar('0');
		return (1);
	}
	while (num > 0)
	{
		rem = num % 10;
		num /= 10;
		rev = rev * 10 + rem;
		count++;
	}
	len = count;
	while (rev > 0)
	{
		rem = rev % 10;
		rev /= 10;
		putchar('0' + rem);
		len--;
	}
	if (len > 0)
	{
		while (len > 0)
		{
			putchar('0');
			len--;
		}
	}
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
