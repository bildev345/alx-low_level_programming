#include <stdio.h>

/**
 * main - prints the sum of all even Fibonacci numbers below 4,000,000
 *
 * Return: Always 0.
 */

int main(void)
{
	long int total, sum, prevOne, prevTwo;

	total = 0;
	sum = 0;
	prevOne = 0;
	prevTwo = 1;

	while (sum < 4000000)
	{
		sum = prevOne + prevTwo;
		if (sum % 2 == 0)
		{
			total += sum;
		}
		prevOne = prevTwo;
		prevTwo = sum;
	}

	printf("%li\n", total);

	return (0);
}
