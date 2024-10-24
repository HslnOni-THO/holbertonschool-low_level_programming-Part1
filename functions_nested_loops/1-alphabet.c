#include "main.h"
/**
 * main - Prints the alphabet in uppercase
 *
 *Description: PRINTS "alphabet_lowercase" followed by a new line
 * followed by a new line. Only _putchar can be used.
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
char letter = 'a';

while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');

return;
}
