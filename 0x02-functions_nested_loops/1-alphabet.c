#include "main.h"
/**
 * main - print lowercase alphabet
 * by joseph vuninga
 * Return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
	return (0);
}
