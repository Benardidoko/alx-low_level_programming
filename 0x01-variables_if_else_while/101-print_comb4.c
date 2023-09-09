#include <stdio.h>

/**
 *  * main - Entry point
 *   *
 *    * Description: Prints all possible different combinations of three digits.
 *     * Numbers must be separated by ', ' followed by a space.
 *      * The three digits must be different.
 *       * Numbers should be printed in ascending order, with three digits.
 *        *
 *         * Return: Always 0 (Success)
 *          */
int main(void)
{
		int i, j, k;

			for (i = 0; i < 10; i++)
					{
								for (j = i + 1; j < 10; j++)
											{
															for (k = j + 1; k < 10; k++)
																			{
																								putchar('0' + i);
																												putchar('0' + j);
																																putchar('0' + k);
																																				if (i < 7)
																																									{
																																															putchar(',');
																																																				putchar(' ');
																																																								}
																																							}
																	}
									}

				putchar('\n');

					return (0);
}
