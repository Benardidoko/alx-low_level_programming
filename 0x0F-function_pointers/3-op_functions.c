#include "calc_functions.h"

/**
 *  * add_numbers - Compute the sum of two integers.
 *   * @a: An integer.
 *    * @b: Another integer.
 *     *
 *      * Return: The sum of 'a' and 'b'.
 *       */
int add_numbers(int a, int b)
{
		return (a + b);
}

/**
 *  * subtract_numbers - Compute the difference of two integers.
 *   * @a: An integer.
 *    * @b: Another integer.
 *     *
 *      * Return: The difference of 'a' and 'b'.
 *       */
int subtract_numbers(int a, int b)
{
		return (a - b);
}

/**
 *  * multiply_numbers - Compute the product of two integers.
 *   * @a: An integer.
 *    * @b: Another integer.
 *     *
 *      * Return: The product of 'a' and 'b'.
 *       */
int multiply_numbers(int a, int b)
{
		return (a * b);
}

/**
 *  * divide_numbers - Compute the quotient of two integers.
 *   * @a: An integer.
 *    * @b: Another integer.
 *     *
 *      * Return: The quotient of 'a' and 'b'.
 *       */
int divide_numbers(int a, int b)
{
		if (b == 0)
				{
							printf("Error\n");
									exit(100);
										}
			return (a / b);
}

/**
 *  * find_remainder - Compute the remainder of division.
 *   * @a: An integer.
 *    * @b: Another integer.
 *     *
 *      * Return: The remainder of dividing 'a' by 'b'.
 *       */
int find_remainder(int a, int b)
{
		if (b == 0)
				{
							printf("Error\n");
									exit(100);
										}
			return (a % b);
}

