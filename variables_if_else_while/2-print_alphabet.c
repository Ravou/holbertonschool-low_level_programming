#include <stdio.h>
/**
 * main - entry point
 * Return: Always (0) (Success)
 */
int main() {
    char c;
    for (c = 'A'; c <= 'Z'; c++) {
        putchar(c);
    }
    putchar('\n'); // Nouvelle ligne après l'affichage des lettres
    return 0;
