#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
	char *start = str;
	char *cipher = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *shifted = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*str)
	{
		char *check = cipher;
		char *replace = shifted;
		int found = 0;

		while (*check)
		{
			if (*str == *check)
			{
				*str = *replace;
				found = 1;
				break;
			}

			check++;
			replace++;
		}

		if (!found)
			str++;
		else
			str++;
	}

	return (start);
}

