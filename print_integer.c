#include "main.h"
/**
 * print_decimal - print decimal numbers
 * @num: an integer
 *  Return: number of decimal characters printed
 */
int print_decimal(int num)
{
	int len = 0, count = 0, temp = 0, l = 0, i = 0;
	char *ptr;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	if (num < 0)
	{
		_putchar('-');
		num = -(num);
		count++;
	}
	temp  = num;
	while (temp > 0)
	{
		len++;
		temp /= 10;
	}
	count += len;
	ptr = malloc(len);
	if (ptr == NULL)
		return (-1);
	l = len;
	while (num > 0)
	{
		ptr[len] = '0' + (num % 10);
		num /= 10;
		len--;
	}
	for (i = 0; i <= l ; i++)
		_putchar(ptr[i]);
	free(ptr);
	return (count);
}
