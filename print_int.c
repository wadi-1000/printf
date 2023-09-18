#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * print_int - Prints an integer.
 * @list: Stores an integer to be printed.
 *
 * Return: Character
 */
int print_int(va_list list)
{
    int track = 0;
    int num = va_arg(list, int);
    int sign = 1;
    int temp, num_digits, i, j;
    char digit;

    if (num == 0)
    {
        write(1, "0", 1);
        track++;
        return (track);
    }
    if (num < 0)
    {
        write(1, "-", 1);
        track++;
        num = -num;
        sign = -1;
    }

    temp = num;
    num_digits = 0;

    while (temp > 0)
    {
        temp /= 10;
        num_digits++;
    }

    i = 1;
    while (i < num_digits)
    {
        temp = num;
        j = 1;
        while (j < num_digits - i)
        {
            temp /= 10;
            j++;
        }

        digit = (char)(temp % 10 + '0');
        write(1, &digit, 1);
        track++;
        i++;

    digit = (char)(num % 10 + '0');
    write(1, &digit, 1);
    track++;

    return (track * sign);
    }
    return (track * sign);
}
