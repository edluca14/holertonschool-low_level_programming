#include <stdio.h>
/**
 * main - Prints the size of various
 *        types on the computer it is compiled and run on
 *
 * Return: Always 0.
 */
int main()
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a float: %lu byte(s)", (unsigned long)sizeof(f));

	return (0);
}
