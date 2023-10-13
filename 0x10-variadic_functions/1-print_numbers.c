#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers followed by a separator
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (separator == NULL)
	{
		return;
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}

