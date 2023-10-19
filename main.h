#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_character(char c);
int print_string(char *str);
int print_binary(unsigned int decimal);
int print_decimal(int num);
int print_octal(unsigned int num);
int print_unsigned(unsigned int num);
int print_hexadecimal(unsigned int decimal);
int print_HEXADECIMAL(unsigned int decimal);
int print_handle(unsigned int num, char c);
int print_non_printable(char *str);
int _strlen(char *str);
int print_reverse(char *str);
int print_adress(void *ptr);

#endif
