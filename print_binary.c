#include "main.h"

/**
 * print_binary - Convert and print decimal number in base 2
 * @decimal: The decimal number to be process
 *
 * This function convert convert and print decimal in base 2
 * It also take count of the printed character
 *
 * Return: The count of printed character
 */
int  print_binary(unsigned int decimal)
{
	int count = 0;

	if (decimal < 0)
		return (-1);
	if (decimal == 0)
	{
		putchar('0');
		return (1);
	}
	if (decimal == 1)
	{
		putchar('1');
		return (1);
	}
	if (decimal > 1)
		count = 1 + print_binary(decimal / 2);
	putchar('0' + (decimal % 2));
	return (count);
}
