#include <stdio.h>

/**
 *  * main - Entry point
 *   *
 *    * Description: Prints all possible combinations of two two-digit numbers.
 *     * Numbers should range from 0 to 99.
 *      * Two numbers are separated by a space, and both are printed with two digits.
 *       * Combinations are separated by a comma, followed by a space.
 *        * Combinations are printed in ascending order.
 *         * 00 01 and 01 00 are considered the same combination of the numbers 0 and 1.
 *          *
 *           * Return: Always 0 (Success)
 *            */
int main(void)
{
		int i, j;

			for (i = 0; i < 100; i++)
					{
								for (j = i; j < 100; j++)
											{
															if (i != j)
																			{
																								putchar((i / 10) + '0');
																												putchar((i % 10) + '0');
																																putchar(' ');
																																				putchar((j / 10) + '0');
																																								putchar((j % 10) + '0');
																																												if (i < 98 || j < 99)
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

