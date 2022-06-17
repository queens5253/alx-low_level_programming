#include "main.h"
/**
 * print_alphabet_x10 - function that prints
 * 10 times the alphabet in lowercase
*/

void print_alphabet_x10(void)
{
int j;
int y;

for (y = 0; y < 10; j++)
{
for (j = 'a'; j <= 'z'; j++)
{
_putchar(j);
}
}
_putchar('\n');
}
