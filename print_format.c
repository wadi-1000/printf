#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - function that produces output according to a given input
 * @format: charater, string to be printed
 *
 * Return: Length of the string
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int track = 0;
	va_list list;

	va_start(list, format);
	if (format)
	{
		while (format[i])
		{
			if (format[i] != '%')
			{
				printf("%c", format[i]);
				track++;
				i++;
			}
			else
			{
				i++;
				if (format[i] == 'c')
				{
					printf("%c", va_arg(list, int));
					track++;
					i++; }
				if (format[i] == '%')
				{
					printf("%%", va_arg(list, char *));
					track++;
					i++; }
				if (format[i] == 's')
				{
					char *str = va_arg(list, char *);

					while (*str)
					{
						printf("%c", *str);
						track++;
						str++; }
					i++; }}}}
	va_end(list);
	return (track); }
