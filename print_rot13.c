#include "main.h"
/**
 * rot13 - print the rot13 encryption of a strijng
 * @str: a string
 * Return: return the number of characters printed
 */
int rot13(char *str)
{
	int j = 0, i = 0, count = 0, flag = 0;
	char *enc_1 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *enc_2 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	if (str == NULL)
		return (-1);
	while (str[i] != '\0')
	{
		flag = 0;
		for (j = 0; enc_1[j] && !flag; j++)
		{
			if (str[i] == enc_1[j])
			{
				_putchar(enc_2[j]);
				count++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			_putchar(str[i]);
			count++;
		}
		i++;
	}
	return (count);
}
