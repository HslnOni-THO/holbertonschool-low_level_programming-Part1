#include <unistd.h>

/**
 * main - Point d'entrée du programme
 *
 * Return: Toujours 0 (Succès)
 */
int main(void)
{
    int num;

    for (num = 0; num <= 9; num++)
    {
        putchar(num + '0');
    }
    putchar('\n');

    return (0);
}
