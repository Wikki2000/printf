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
	unsigned int i, j, binary[32];

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		binary[i] = num % 2;
		num /= 2;
		i++;
	}

	/* Print remainder in reverse order which is it binary rep */
	for (j = i - 1; j > 0; j--)
		_putchar(binary[i] + '0');
	return (i);
}
