#include "main.h"
#include <stdio.h>
#include <stdarg.h>

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

	printf("%c", va_arg(list, int));
	track++;
	i++;
	return (track);
}
