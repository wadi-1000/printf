#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...);
int print_char(va_list list);
int print_string(va_list list);
int print_String(va_list list);
int print_perc(va_list list);
int print_int(va_list list);
int print_bit(va_list list);
int print_octal(va_list list);
int get_print(va_list list, char c);
int unsigned_hex_uppercase(va_list list);
int unsigned_hex(va_list list);
int unsigned_octal(va_list list);
int unsigned_decimal(va_list list);
int print_pointer(va_list list);
void my_sprintf(char *buffer, const char *format, int i);
int print_string(va_list list);

#endif
