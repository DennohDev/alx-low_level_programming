#include <stdio.h>
#include <conio.h>
/**
 * main - program to print the size of data types
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	char chartype;
	int inttype;
	long int longinttype;
	long long int longlonginttype;
	float floattype;

	printf("Size of a char: %c byte(s)\n", chartype);
	printf("Size of an int: %d byte(s)\n", inttype);
	printf("Size of a long int: %ld byte(s)\n", longinttype);
	printf("Size of a long long int: %lld byte(s)\n", longlonginttype);
	printf("Size of a float: %f byte(s)\n", floattype);

	return (0);
}

