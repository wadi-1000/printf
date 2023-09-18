#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * print_char - Prints a character from a string.
 * @list: Stores characters to be printed.
 *
 * Return: Character
 */
int print_char(va_list list)
{
	int i = 0;
	int track = 0;
	
	char c = (char)va_arg(list, int);
	write(1, &c, 1);
	track++;
	i++;
	return (track);
}
