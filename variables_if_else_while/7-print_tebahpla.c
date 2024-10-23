#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function prints the aplhabet from z to a
 * followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
	{
	putchar(i);
	i++;
	}

	putchar('\n');
	return (0);
}
