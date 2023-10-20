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
	else if (c == 'u')
		track += unsigned_decimal(list);
	else if (c == 'o')
		track += unsigned_octal(list);
	else if (c == 'x')
		track += unsigned_hex(list);
	else if (c == 'X')
		track += unsigned_hex_uppercase(list);
	/*
	 * else if (c == 'p')
	 * track += print_pointer(list);
	 */
	else if (c == 'd' || c == 'i')
		track += print_int(list);
	return (track);
}
