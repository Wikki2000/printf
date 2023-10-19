#include "main.h"

/**
 * custom_printf - Print a pointer address in a custom format
 * @ptr: Pointer to be printed in hexadecimal
 *
 * This function prints a pointer address in a custom format.
 * It prints the "0x" prefix, followed by the hexadecimal
 * representation of the pointer address.
 * It skips leading zeros to ensure a compact representation.
 *
 * Return: The number of characters printed
 */
int print_adress(void *ptr)
{
	const char *hex_digits = "0123456789abcdef";
	int charCount = 0;
	int width, leadingZero, nibble, i;

	uintptr_t address = (uintptr_t)ptr;

	/* Print the "0x" prefix for a pointer address */
	putchar('0');
	putchar('x');
	charCount += 2; /* Increment the character count for "0x" */

	/* Skip leading zeros */
	width = sizeof(void *) * 2;
	leadingZero = 1;

	for (i = width - 1; i >= 0; i--)
	{
		nibble = (address >> (i * 4)) & 0xF;
		if (nibble != 0)
			leadingZero = 0;

		if (!leadingZero)
		{
			putchar(hex_digits[nibble]);
			charCount++;
		}
	}

	if (leadingZero)
	{
		putchar('0');
		charCount++;
	}

	return (charCount);
}
