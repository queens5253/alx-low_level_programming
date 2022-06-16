#include <stdio.h>


int main(void)
{    
  char ch;
  printf("Lowercase letters on next line :\n");
  for (ch= ‘a’; ch<= ‘z’; ch++)
  putchar(ch);
  putchar (‘\n’);
  getch();
}
