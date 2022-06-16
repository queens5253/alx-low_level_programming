#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase
 * letters
 * Return: 0 always
*/

int main(void)
{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);

putchar('\n');

return (0);
}
