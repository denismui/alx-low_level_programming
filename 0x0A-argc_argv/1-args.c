#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: counts the arguments
 * @argv: arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
printf("%i\n", argc - 1);

return (0);
}
