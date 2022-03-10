#include <stdio.h>

/**
 * main - print size of different data types
 * Return: 0
 */
int main(void)
{
	printf("Size of a char: %2d byte(s)", sizeof(char));
	puts("");
	printf("Size of an int: %2d byte(s)", sizeof(int));
	puts("");
	printf("Size of a long int: %2d byte(s)", sizeof(long int));
	puts("");
	printf("Size of a long long int: %2d byte(s)", sizeof(long long int));
	puts("");
	printf("Size of a float: %2d byte(s)", sizeof(float));

	return (0);
}
