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
				write(1, &format[i], 1);
				track++; }
			else
			{
				i++;
				if (format[i] == '\0')
				{
					write(1, "-1", 2);
					track += 2;
					break; }
				if (format[i] == '%')
				{
					write(1, "%", 1);
					track++; }
				if (format[i] == 'c' || format[i] == 'c' || format[i] == 'b'
						|| format[i] == 'd' || format[i] == 'i')
				{
					char c = format[i];

					get_print(list, c); }
				else
				{
						write(1, "%", 1);
						write(1, &format[i], 1);
				}}
			i++;
		}}
	va_end(list);
	return (track); }
