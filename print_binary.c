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
	int num2 = decimal, count = 0, rem = 0, len = 0;
	char *ptr;

	while (num2 > 0)
	{
		num2 /= 2;
		len++;
	}
	count = len;
	len -= 1;
	ptr = malloc(count);
	while (decimal > 0)
	{
		rem = decimal % 2;
		decimal /= 2;
		ptr[len] = '0' + rem;
		len--;
	}
	write(1, ptr, count);
	free(ptr);
	return (count);
}
