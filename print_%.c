#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_perc - Prints a percentage sign.
 * @list: Stores character to be printed.
 *
 * Return: Character
 */
int print_perc(va_list list)
{
	int i = 0;
	int track = 0;

	printf("%%", va_arg(list, char *));
	track++;
	i++;
	return (track);
}


