#include "main.h"

void write_hex_byte(unsigned char byte)
{
	char hex_chars[] = "0123456789abcdef";
	char hex[3];
	hex[0] = '\\';
	hex[1] = hex_chars[byte >> 4];
	hex[2] = hex_chars[byte & 0xF];
	write(STDOUT_FILENO, hex, 3);
}

void _hex(char *ptr)
{
	while (*ptr != '\0')
	{
		unsigned char byte = (unsigned char)(*ptr);
		write_hex_byte(byte);
		ptr++;
	}
}

/**
 * print_String - prints string and if its not a letter its ascci value
 * @list: string to be printed
 *
 * Return: length of the string
 */

int print_String(va_list list)
{
	int i;
	char *str = va_arg(list, char *);
	int track = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 32 && str[i] < 127)
			write(1, &str[i], 1);
		else
		{
			_hex(&str[i]);
		}
		track++;
	}
	return (track);
}
