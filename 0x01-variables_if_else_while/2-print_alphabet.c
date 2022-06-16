#include <stdio.h>
#include <termios.h>
#include <unistd.h>
/**
 * main - program that prints alphabets
 * in lowercase
*/
int main(void)
{
 int ch;
 for (ch = 'a'; ch <= 'z'; ch++)
 putchar (ch);
 putchar (10);
 getch();
}



