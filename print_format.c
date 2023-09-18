#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

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
				write (1, &format[i], 1);
				track++;
				i++; }
			else
			{
				i++;
				if (format[i] == 'c')
				{
					track += print_char(list);
					i++; }
				if (format[i] == '%')
				{
					track += print_perc(list);
					i++; }
				if (format[i] == 's')
				{
					track += print_string(list);
					i++; }
				if (format[i] == 'd' || format[i] == 'i')
				{
					track += print_int(list);
					i++; }
				if (format[i] == 'b')
				{
					track += print_bit(list);
					i++; }
			}}}
	va_end(list);
	return (track); }
