#include "main.h"
#include <stdio.h>


/**
 * main - prints fizzbuzz
 * Return: Always 0
 */
int main(void)
{
	int n;


	for (n = 2; n <= 100; n++)
	{
		printf(" ");
		if (n % 3 == 0)
			printf("Fizz");
		if (n % 5 == 0)
			printf("Buzz");
		if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz");
	}
	printf("\n");
	return (0);
}
