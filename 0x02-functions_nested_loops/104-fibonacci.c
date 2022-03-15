#include <stdio.h>

/**
 *main - prints the first 98 fibonaci sequences
 *Return: 0
 */
int main(void)
{
	unsigned long f1 = 1, f2 = 2, next;
	short int i = 0;

	while (i <= 98)
	{
		printf("%lu", f1);
		if (i < 98)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
		next = f1 + f2;
		f1 = f2;
		f2 = next;
		i++;
	}
	return (0);
}
