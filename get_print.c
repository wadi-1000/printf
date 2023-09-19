#include "main.h"

/**
 * get_print - gets the correct print
 * function to display the given message
 * @list: message to be displayed
 * @c: format specifier
 *
 * Return: Nothing
 */

int get_print(va_list list, char c)
{
	int track;

	track = 0;
	if (c == 'c')
		track += print_char(list);
	else if (c == 's')
		track += print_string(list);
	else if (c == 'b')
		track += print_bit(list);
	else if (c == 'd' || c == 'i')
		track += print_int(list);
	return (track);
}
