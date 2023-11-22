#include "main.h"

/**
 * _isdigit - Entry point of the program
 * @c: Parameter to be returned
 * Return: 1 if Success and 0 if failed
 **/

int _isdigit(int c)

{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
