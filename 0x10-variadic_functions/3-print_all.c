#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything based on the format specifier
 * @format: A list of types of arguments
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *sep = "";
	va_list args;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				break;
			case 's':
				{
					char *str = va_arg(args, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
				}
				break;
			default:
				i++;
				continue;
		}
		sep = ", ";
		i++;
	}

	printf("\n");
	va_end(args);
}

