#include <stdio.h>
/**
 * main - print base 16 numbers
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 16; n++)
		putchar((n % 16) + '0');
	putchar('\n');
	return (0);
}
