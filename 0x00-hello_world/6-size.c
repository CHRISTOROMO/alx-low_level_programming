#include <stdio.h>

int main(void)
{
	int x;
	long int y;
	long long z;
	char a;
	float b

	printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(x));
	printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(y));
	printf("Size of a long long: %lu bytes(s)\n", (unsigned long)sizeof(z));
	printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(b));

	return (0);
}	
