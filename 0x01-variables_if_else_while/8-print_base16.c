#include <stdio.h>
/**
 * main - program that prints all the
 * numbers in base 16 in lowercase
 * Return: 0 always
*/

int main(void)
{
int num;
char ch;

for (num = 0; num < 10; num++)
putchar((num % 10) + '0');

for (ch = 'a'; ch <= 'f'; ch++)
putchar(ch);

putchar('\n');

return (0);
}
