#include <stdio.h>

/**
 * main - print size of different data types
 * Return: 0
 */
int main(void)
{
	printf("Size of a char: %2d byte(s)"
			"Size of an int: %2d byte(s)"
			"Size of a long int: %2d byte(s)"
			"Size of a long long int: %2d byte(s)"
			"Size of a float: %2d byte(s)",
			sizeof(char), sizeof(int), sizeof(long int), sizeof(long long int), sizeof(float));

	return (0);
}
