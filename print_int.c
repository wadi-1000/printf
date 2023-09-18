#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * print_int - Prints an integer.
 * @list: Stores an integer to be printed.
 *
 * Return: Character
 */
int print_int(va_list list)
{
	int track = 0;

	char c = (char)va_arg(list, int);
        write(1, &c, 1);
	track++;
	return (track);

}

