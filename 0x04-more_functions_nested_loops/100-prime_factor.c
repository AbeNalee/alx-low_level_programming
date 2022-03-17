#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number
 * 612852475143
 * Return: 0.
 */

int main(void)
{
	long num = 612852475143;
	long divisor = 2;
	long prime_large = 0;

	while (num != 1)
	{
		if (num % divisor == 0)
		{
			num = num / divisor; prime_large = divisor;
		}
		divisor += 1;
	}
	printf("%ld\n", prime_large);
return (0);
}
