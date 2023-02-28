#include "main.h"
/**
 * main - print a string followed by a new line, to stdout
 * By Joseph Vuninga
 * Return: 0
 */
void _puts(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
	    _putchar(str[i]);
	    i++;
    }
    _putchar('\n');
}
