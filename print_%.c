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
	char character = (char)va_arg(list, int);


	(void)list;

	if (character == '\0')
	{
		write(1, &percent, 1);
		write(1, &character, 1);
		return (2);
	}
	else
	{
		write(1, &percent, 1);
		return (1);
	}
	return (track);
}


