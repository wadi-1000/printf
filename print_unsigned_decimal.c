#include "main.h"

/**
 * unsigned_decimal - prints the unsigned decimal
 * @list: number to be printed
 *
 * Return: length of unsigned decimal
 */

int unsigned_decimal(va_list list)
{
	char buffer[32];
	int i = 0;
	int track = 0;
	unsigned int num = va_arg(list, int);

	do {
		buffer[i++] = num % 10 + '0';
		num /= 10;
	} while (num > 0);
	while (i > 0)
	{
		write(1, &buffer[--i], 1);
		track++;
	}
	return (track);
}
