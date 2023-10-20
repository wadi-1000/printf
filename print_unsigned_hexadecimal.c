#include "main.h"

/**
 * unsigned_hex - prints heaxadecimal form a given decimal
 * @list: No to be printed in hex
 *
 * Return: length of hex No
 */

int unsigned_hex(va_list list)
{
	char buffer[32];
	int i = 0;
	unsigned int num = va_arg(list, int);
	int track = 0;

	do {
		buffer[i++] = "0123456789abcdef"[num % 16];
		num /= 16;
	} while (num > 0);
	while (i > 0)
	{
		write(1, &buffer[--i], 1);
		track++;
	}
	return (track);
}
