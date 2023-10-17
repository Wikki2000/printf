#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_character(char c);
int print_string(char *str);
int print_binary(unsigned int decimal);
int print_decimal(int num);
int print_octal(unsigned int num);
int print_unsigned(unsigned int num);
int print_hexadecimal(int decimal);
int print_HEXADECIMAL(int decimal);
int print_unsigned_and_octal(unsigned int num, char c);

#endif
