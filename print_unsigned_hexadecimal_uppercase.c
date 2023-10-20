#include "main.h"

/**
 * unsigned_hex_uppercase - print hex for of a decimal in uppercase
 * @list: No to ba printed in hex
 *
 * Return: length of the hex No
 */

int unsigned_hex_uppercase(va_list list)
{
	char buffer[32];
	int i = 0;
	int track = 0;
	unsigned int num = va_arg(list, int);

	do {
		buffer[i++] = "0123456789ABCDEF"[num % 16];
		num /= 16;
	} while (num > 0);
	while (i > 0)
	{
		write(1, &buffer[--i], 1);
		track++;
	}
	return (track);
}
