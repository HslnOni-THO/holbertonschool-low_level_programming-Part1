#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Description: PRINTS "print_alphabet" followed by a new line
 * followed by a new line. Only _putchar can be used.
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void) {

charletter = 'a';

while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');

return (10);
}
