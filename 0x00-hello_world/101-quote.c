#include <unistd.h>

/**
 *  * main - Entry point of the program
 *   *
 *    * Return: Always 0 (Success)
**/
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19",
sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19") - 1);
return (0);
}
