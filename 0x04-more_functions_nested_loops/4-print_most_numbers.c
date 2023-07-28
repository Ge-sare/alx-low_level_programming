#include "main.h"

/**
 * print_most_numbers - Print numbers from 0 to 9
 * Description: Prints numbers excluding 2 and 4
 * Return: The numbers from 0 to 9
 */

void print_most-numbers(void)

{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		if (x != '2' && x != '4')
		{
			_putchar(x);
		}
	}

	_putchar('\n')
}
