#include "calc_functions.h"

/**
 *  * get_function - selects the appropriate function based on the operator.
 *   * @operator: The operator to be used.
 *    *
 *     * Return: Pointer to the correct function or NULL if the operator is invalid.
 *      */
int (*get_function(char *operator))(int, int)
{
		calc_function_t functions[] = {
					{"+", add},
							{"-", subtract},
									{"*", multiply},
											{"/", divide},
													{"%", modulo},
															{NULL, NULL}
						};
			int i = 0;

				while (functions[i].operator != NULL)
						{
									if (strcmp(operator, functions[i].operator) == 0)
												{
																return functions[i].function;
																		}
											i++;
												}
					return NULL;
}

