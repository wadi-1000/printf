#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
int _printf(const char *format, ...);
int print_char(va_list list);
int print_string(va_list list);
int print_perc(va_list list);
int print_int(va_list list);
#endif
