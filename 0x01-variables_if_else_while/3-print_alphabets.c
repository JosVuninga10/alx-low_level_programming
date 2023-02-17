#include <stdio.h>
/**
 * main - print alphabet in lowercase then in uppercase
 *
 * Return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (letter = 'B'; letter <= 'Z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
