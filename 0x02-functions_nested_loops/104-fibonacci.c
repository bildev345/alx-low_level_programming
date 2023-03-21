#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 */

int main(void)
{
	long int sum;
	long int prevOne, prevTwo;
	int counter;

	sum = 0;
	prevOne = 0;
	prevTwo = 1;
	counter = 0;

	while (counter < 98)
	{
		sum = prevOne + prevTwo;
		printf("%li, ", sum);
		prevOne = prevTwo;
		prevTwo = sum;

		counter++;
	}
	sum = prevOne + prevTwo;
	printf("%li\n", sum);

	return (0);
}
