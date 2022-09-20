#include "main.h"
/**
 * _puts - prints a string
 *
 * @str: A pointer to an int that wi be changed
 *
 *Return: void
 */
void _puts(char *str)
{
	char *c;
	int m;

	c = str;

	for (m = 0; c[m]; m++);
	{
		putchar(c[m]);
	}
	putchar('\n');
}
