#include "main.h"

/**
 * print_most_numbers - Print numbers from 0 to 9
 * Description: Prints numbers excluding 2 and 4
 * Return: The numbers from 0 to 9
 */

void print_most_numbers(void)
{
	int x;
	for (x = 48; x < 58; x++)
	{
		if ((x == 50) || (x == 52))
		{
			continue;
		}
		_putchar(x);
	}
	_putchar(10);
}
