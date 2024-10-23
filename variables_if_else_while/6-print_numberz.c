#include <unistd.h>

/**
 * main - Affiche les chiffres de 0 à 9
 *
 * Return: Toujours 0 (Succès)
 */
int main(void)
{
    int num;

    for (num = 0; num <= 9; num++)
    {
        int digit = num + '0'; // Convertir le chiffre en caractère ASCII
        write(1, &digit, 1);
    }
    write(1, "\n", 1);

    return (0);
}
