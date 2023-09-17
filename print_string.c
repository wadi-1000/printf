#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_string - Prints a string.
 * @list: Stores characters to be printed.
 *
 * Return: Character
 */

int print_string(va_list list)
{
	int i = 0;
	int track = 0;

	char *str = va_arg(list, char *);

	while (*str)
	{
		printf("%c", *str);
		track++;
		str++;
	}
	i++;
	return (track);
}
