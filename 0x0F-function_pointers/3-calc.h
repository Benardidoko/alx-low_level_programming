#ifndef CALC_H
#define CALC_H

#include <stdlib.h>
#include <stdio.h>

/**
 *  * struct operation - Struct operation
 *   * @operator: The operator
 *    * @function: The associated function
 *     */
typedef struct operation
{
		char *operator;
			int (*function)(int a, int b);
} operation_t;

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int modulo(int a, int b);
int (*get_operation_function(char *s))(int, int);

#endif

