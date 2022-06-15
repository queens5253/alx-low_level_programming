#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
   * main - assign a random number to the variable n
   * each time it is executed and prints the last digit
   * of the number stored in the variable n
   * Return: 0 if exited correctly
*/
int main(void)
{
int n, lastdigit;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastdigit = n % 10;
printf("Last Digit of %d is %d", n, lastdigit);
printf(" ");
if (lastdigit > 5)
{
printf("and is greater than 5");
}
if (lastdigit == 0)
{
printf("and is 0");
}
if (lastdigit < 6 && lastdigit != 0)
{
printf("and is less than 6 and not 0");
}

printf("\n");

return (0);
}
