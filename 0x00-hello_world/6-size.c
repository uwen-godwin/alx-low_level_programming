#include <stdio.h>
/**
 * main - C program that prints the size of various types, compiled and run on.
 * Return: Always 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %lu byte(s)", sizeof(char(a)))
	printf("Size of an int: %lu byte(s)", sizeof(int(b)));
	printf("Size of a long int: %lu byte(s)", sizeof(long int(c)));
	printf("Size of a long long int: %lu byte(s)", sizeof(long long int(d)));
	printf("Size of a float: %lu byte(s)", sizeof(float(e)));
	return (0);
}
