#include "main.h"

void print_hex_char(char c)
{
	char hex_chars[] = "0123456789abcdef";
	write(STDOUT_FILENO, &hex_chars[(unsigned char)c], 1);
}

int print_pointer(va_list list)
{
	char *ptr = va_arg(list, void *);
	unsigned long int hex = (unsigned long int)ptr;
	int i, length = 0;
	int leadingZeros = 1;
	
	write(STDOUT_FILENO, "0x", 2);
	for (i = 15; i >= 0; i--)
	{
		int shift = i * 4;
		char digit = (hex >> shift) & 0xF;
		
		if (leadingZeros && digit == 0)
			continue;
		leadingZeros = 0;
		print_hex_char(digit);
		length++;
	}
	if (length == 0)
	{
		write(STDOUT_FILENO, "0", 1);
		length = 1;
	}
	return (length);
}

