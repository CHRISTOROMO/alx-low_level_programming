#include <stdio.h>

int main(void)
{
	int x;
	long int y;
	long long z;

	char a;
	float b

	print("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(a));
	print("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(x));
	print("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(y));
	print("Size of a long long: %lu bytes(s)\n", (unsigned long)sizeof(z));
	print("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(b));

	return (0);
}	
