#include <stdio.h>

/**
 * main- prints the name of the file the program was compiled from
 * __FILE__ is an inbuilt defined constant that gives the name of the file
 *
 * Return: Always 0
 */
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}

