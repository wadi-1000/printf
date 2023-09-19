#include "main.h"

/**
 * print_int_recursive - Prints an integer recursively.
 * @num: The integer to be printed.
 * @track: Pointer to the track variable.
 */
void print_int_recursive(int num, int *track)
{
	char digit;

	if (num == 0)
	{
		write(1, "0", 1);
		(*track)++;
		return;
	}
	if (num < 0)
	{
		write(1, "-", 1);
		(*track)++;
		num = -num;
	}
	if (num / 10 != 0)
		print_int_recursive(num / 10, track);
	digit = (char)(num % 10 + '0');
	write(1, &digit, 1);
	(*track)++;
}

/**
 * print_len - Prints the length of a string.
 * @list: A va_list containing the string.
 *
 * Return: The number of characters printed.
 */
int print_len(va_list list)
{
	int track = 0;
	char *str = va_arg(list, char *);

	if (str == NULL)
	{
		write(1, "(null)", 6);
		track += 6;
	}
	else
	{
		int len = 0;

		while (str[len] != '\0')
		{
			len++;
		}
		track += len;
	}
	return (track);
}


/**
 * print_int - Prints an integer.
 * @list: Stores an integer to be printed.
 *
 * Return: Number of characters printed.
 */
int print_int(va_list list)
{
	int track = 0;
	int num = va_arg(list, int);

	print_int_recursive(num, &track);
	return (track);
}

