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

/*Declaring the variables*/
int count = 0;

if (argc > 0)
{
/*WHILE -prints each argument*/
while (count < argc)
{
printf("%s\n", argv[count]);
count++;
}
}
return (0);
}
