#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_int - Prints an integer.
 * @list: Stores an integer to be printed.
 *
 * Return: Character
 */
int print_int(va_list list)
{
	int track = 0;

	printf("%d", va_arg(list, int));
	track++;
	return (track);

}

