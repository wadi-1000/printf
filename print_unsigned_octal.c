#include "main.h"

/**
 * unsigned_octal - prints octal of a given decimal
 * @list: No to be printed
 *
 * Return: length of th number printed
 */

int unsigned_octal(va_list list)
{
	char buffer[32];
	int i = 0;
	unsigned int num = va_arg(list, int);
	int track = 0;

	do {
		buffer[i++] = num % 8 + '0';
		num /= 8;
	} while (num > 0);
	while (i > 0)
	{
		write(1, &buffer[--i], 1);
		track++;
	}
	return (track);
}
