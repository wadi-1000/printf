#include "main.h"

/**
 * print_string - Prints a string.
 * @list: Stores characters to be printed.
 *
 * Return: Character
 */

int print_string(va_list list)
{
	/*int i = 0;*/
	int track = 0;

	char *str = va_arg(list, char *);
	
	if (str == NULL) {
		write(1, "(null)", 6);
		track += 6;
	} else {
		while (*str) {
			write(1, str, 1);
			track++;
			str++;
		}
	}
	return (track);
}
