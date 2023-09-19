#include "main.h"

/**
 * print_perc - Prints a percentage sign.
 * @list: Stores character to be printed.
 *
 * Return: Character
 */
int print_perc(va_list list)
{
	int track = 0;
	char percent = '%';
	(void)list;	

	write (1, &percent, 1);
	track++;

	return (track);
}


