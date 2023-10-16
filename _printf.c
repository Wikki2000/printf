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

	va_start(ls, format);
	if (format == NULL)
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
			count += print_character(format[i]);
		else
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			if (format[i] == 'c')
				count += _putchar((char)va_arg(ls, int));
			else if (format[i] == 's')
				count += print_string(va_arg(ls, char *));
			else if (format[i] == '%')
				count += print_character(format[i]);
			else if (format[i] == 'd' || format[i] == 'i')
				count += print_decimal(va_arg(ls, int));
			else if (format[i] == 'b')
				count += print_binary(va_arg(ls, unsigned int));
			else
			{
				count += print_character('%');
				count += print_character(format[i]);
			}
		}
		i++;
	}

	va_end(ls);
	return (count);
}
