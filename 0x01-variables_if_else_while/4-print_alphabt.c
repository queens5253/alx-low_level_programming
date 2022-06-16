#include <stdio.h>
/**
 * main -  Program that prints the alphabet in lowercase
 * except letters q and e
 * Return: 0 always
*/

int main(void)
{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'e' && ch != 'q')
putchar(ch);
}

putchar('\n');

return (0);
}
