#include "main.h"

/**
 * _printf - print formatted output to standard output
 * @format: a string containing format specifiers and plain text
 *  Return: number of characters printed except null character
 */

int _printf(const char *format, ...)
{
	va_list ls;
	int i = 0, count = 0;
	char *s, c;

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
			switch (format[i])
			{
			case 'c':
				c = (char)va_arg(ls, int);
				_putchar(c);
				count++;
				break;
			case 's':
				s = va_arg(ls, char *);
				count += print_string(s);
				break;
			case '%':
				_putchar(format[i]);
				count++;
				break;
			}
		}
		i++;
	}

	va_end(ls);
	return (count);
}
