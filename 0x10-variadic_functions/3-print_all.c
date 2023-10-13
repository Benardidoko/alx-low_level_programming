#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all_types - prints anything, given a list of types of arguments.
 * @type_list: list of types of arguments.
 * @argument_list: variable arguments.
 */
void print_all_types(const char * const type_list, ...)
{
    int i = 0;
    char *str, *sep = "";

    va_list argument_list;

    va_start(argument_list, type_list);

    if (type_list)
    {
        while (type_list[i])
        {
            switch (type_list[i])
            {
                case 'c':
                    printf("%s%c", sep, va_arg(argument_list, int));
                    break;
                case 'i':
                    printf("%s%d", sep, va_arg(argument_list, int));
                    break;
                case 'f':
                    printf("%s%f", sep, va_arg(argument_list, double));
                    break;
                case 's':
                    str = va_arg(argument_list, char *);
                    if (!str)
                        str = "(nil)";
                    printf("%s%s", sep, str);
                    break;
                default:
                    i++;
                    continue;
            }
            sep = ", ";
            i++;
        }
    }
    printf("\n");
    va_end(argument_list);
}

