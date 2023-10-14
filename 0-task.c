#include "main.h"

/**
 * _printf - Customized printf design
 * @format: Pointer to memory address of string to be formatted
 * @..: Variable number of arguement of any types
 *
 * This function print a formated with a type specifier of %s and %c
 * Also able to write % to the console
 *
 * Return: The total count of printed values
 */
int _printf(const char *format, ...)
{
	va_list args;
	const char *str;
	char c;
	int i, j, count = 0;

	va_start(args, format);

	/* Iterate through the first character till a null character ('\0') is encouner */
	for (i = 0; format[i] != '\0'; i++)
	{
		/* Print all character till it encounter a modulus operator (%) */
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}

		else
		{
			i++; /* Move pass the % operator */

			/* Check for a character (c) and a string (s) specifier */
			switch(format[i])
			{
				case 'c':
					c = va_arg(args, int);
					_putchar(c);
					count++;
					break;

				case 's':
					str = va_arg(args, const char *);
					for (j = 0; str[j] != '\0'; j++);
					_putchar(str[j]);
					count++;
					break;

				case '%':
					_putchar('%');
					count++;
					break;
					
				default:
					_putchar('%');
					_putchar(format[i]);
					count += 2;
					break;
			}
		}
	}

	va_end(args);

	return (count);
}
