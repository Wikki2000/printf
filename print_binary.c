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
unsigned print_binary(unsigned int decimal)
{
	int count = 0;
	int bit;
	int binary[7];


	for (bit = 6; bit >= 0; bit--)
	{
		binary[bit] = (decimal & 1);
		decimal >>= 1;
	}

	for (bit = 0; bit < 7; bit++)
		count += _putchar(binary[bit] + '0');

	return (count);
}
