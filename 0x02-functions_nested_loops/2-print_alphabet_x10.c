#include "main.h"
/**
 * print_alphabet_x10 - function that prints
 * 10 times the alphabet in lowercase
*/

void print_alphabet_x10(void)
{
int j, m;

m = 0;

while (m < 10)
{
for (j = 'a'; j <= 'z'; j++)
{
_putchar(j);
}
m++;
_putchar('\n');
}
}
