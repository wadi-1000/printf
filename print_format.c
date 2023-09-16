#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * printf - function that produces output according to a format.
 * @format: a character of strings
 * ...: variable number of arguments
 *
 * Return:  the number of characters printed excluding the null byte.
 *
 */
int _printf(const char *format, ...)
{
	int i;
	va_list list;

	var_start(list, format);

	if (format)
	{
		while(format[i])
		{
		
		}
	}
}
