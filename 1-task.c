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
/**
 * _printf - print a string with format specifier %d and %i
 * @format: a string with format specifters
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list ls;
	int count = 0, i = 0;

	va_start(ls, format);
	if (format == NULL)
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}
		else
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			if (format[i] == 'd' || format[i] == 'i')
				count += print_decimal(va_arg(ls, int));
			else
			{
				_putchar('%');
				_putchar(format[i]);
				count += 2;
			}
		}
		i++;
	}
	va_end(ls);
	return (count);
}
