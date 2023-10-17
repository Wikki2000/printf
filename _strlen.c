#include "main.h"

/**
 *  _strlen - Calculate the lenght of the string
 *  @str: Pointer to the string whoose lenght is to be calculated
 *
 *  Return: Lenght of the string
 */
int _strlen(char *str)
{
	while (*str)
	{
		str++;
		lenght++;
	}

	return (lenght);
}
