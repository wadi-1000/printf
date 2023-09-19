#include "main.h"

/**
 * print_bit - converts an integer in decimal to binary
 * @list: integer(s) to be converted
 *
 * Return: length of the binary number
 */

int print_bit(va_list list)
{
	int binary[32];
	int k;
	int j;
	int track = 0;
	int num = va_arg(list, int);

	if (num == 0)
	{
		write(1, "0", 1);
		write(1, "\n", 1);
	}
	else
	{
		k = 0;
		while (num > 0)
		{
			binary[k] = num % 2;
			num = num / 2;
			k++;
		}
		for (j = k - 1; j >= 0; j--)
		{
			char binary_char = binary[j] + '0';

			write(1, &binary_char, 1);
			track++;
		}
		write(1, "\n", 1);
	}
	return (track);
}
