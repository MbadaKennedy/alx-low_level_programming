#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory
 * Return: pointer to the new memory allocated
 **/
void *malloc_checked(unsigned int b)
{
	void *output = malloc(b);

	if (output == NULL)
		exit(98);
	else
		return (output);
}
