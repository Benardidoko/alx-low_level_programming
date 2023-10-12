#include <stdio.h>
#include <stdlib.h>

/**
 *  * main - Print the opcodes of its own main function.
 *   * @argc: Number of command-line arguments.
 *    * @argv: Array of command-line argument strings.
 *     * Return: 0 if successful, other values for errors.
 *      */
int main(int argc, char **argv)
{
		int count, bytes;

			if (argc != 2)
					{
								printf("Error\n");
										return (1);
											}
				bytes = atoi(argv[1]);
					if (bytes < 0)
							{
										printf("Error\n");
												return (2);
													}
						for (count = 0; count < (bytes - 1); count++)
								{
											if (bytes != 0)
															printf("%02hhx ", ((char *)main)[count]);
												}
							printf("%02hhx\n", ((char *)main)[count]);
								return (0);
}

