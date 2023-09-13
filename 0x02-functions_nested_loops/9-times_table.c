#include "main.h"

/**
 * times_table - prints the multiplications of 9.
 */
void times_table(void)
{
	int a, b, multi;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (b == 0)
			{
				_putchar(48);
				continue;
			}
			multi = a * b;
			_putchar(',');
			_putchar(' ');
			if (multi >= 10)
			{
				_putchar(multi / 10 + 48);
				_putchar(multi % 10 + 48);
			}
			else
			{
				_putchar(' ');
				_putchar(multi + 48);
			}
		}
		_putchar('\n');
	}
}
