#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * print_int - Prints an integer to the standard output.
 * count_digits - Counts the number of digits in an integer.
 * @num: The integer value to be printed.
 * Return: The number of characters printed.
 * Returns -1 if the integer is negative,
 *else returns the integer itself.
 */


int count_digits(int num);

int print_int(va_list list)
{
	int track = 0;
	int num = va_arg(list, int);

	if (num == 0)
	{
		write(1, "0", 1);
		track += 1;
	}
	else if (num == -1)
	{
		write(1, "-1", 2);
		track += 2;
	}
	else
	{
		printf("%d", num);
		track += count_digits(num);
	}

	return (track);
}

/**
 * count_digits - Counts the number of digits in an integer.
 * @num: The integer value to be printed.
 *
 * Return: number of characters to be printed.
*/
int count_digits(int num)
{
	int count = 0;

	if (num == 0)
	{
		return (1);
	}
	while (num != 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}

