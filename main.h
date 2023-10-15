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
int print_binary(unsigned int num);
int print_decimal(int num);

#endif
