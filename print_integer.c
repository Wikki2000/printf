#include "main.h"
/**
 * print_decimal - print decimal numbers
 * @num: an integer
 *  Return: number of decimal characters printed
 */
int print_decimal(int num)
{
	int count = 0;

	if (num < 0)
	{
		_putchar('-');
		count++;
		num = (-num);
	}
	if (num == 0)
	{
		putchar('0');
		return (1);
	}
	else if (num / 10 != 0)
		count += print_decimal(num / 10);
	_putchar('0' + (num % 10));
	count++;

	return (count);
}
