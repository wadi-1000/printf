#include "main.h"

/**
 * my_sprintf - help print_pointer
 * @buffer: pointer to a string
 * @format: format specifier to use
 * @i: counter
 *
 * Return: nothing
 */

void my_sprintf(char *buffer, const char *format, int i)
{
	char ch = (char) (i + (int)'0');

	(void)format;

	buffer[0] = ch;
	buffer[1] = '\0';
}

/**
 * print_pointer - prints the adress of memory
 *
 * @list: pointer whose value is to be printed
 *
 * Return: length of the pointer
 */

int print_pointer(va_list list)
{
	void *ptr = va_arg(list, void *);
	unsigned long int hex = (unsigned long int) ptr;
	char buffer[32];
	int length;

	my_sprintf(buffer, "%lx", hex);
	write(STDOUT_FILENO, buffer, 20);
	length = 0;
	while (hex != 0)
	{
		hex /= 16;
		length++;
	}
	return (length);
}
