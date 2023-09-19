#include "main.h"

/**
 * get_print - gets the correct print
 * function to display the given message
 * @f: function pointer;
 * @list: message to be displayed
 *
 * Return: Nothing
 */

void get_print(va_list list, char c)
{
	if (c == 'c')
		print_char(list);
	if (c == 's')
		print_string(list);
	if (c == 'b')
		print_bit(list);
	if (c == 'd' || c == 'i')
		print_int(list);
}
