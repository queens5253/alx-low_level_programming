#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * Program Description: assigns a random number to the variable n 
 * each time it is executed 
 * Return : always 0 
*/

/* 
 * main: prints the variable n based on the condition 
 * in printf function
*/
int main(void)  
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
	printf("%d is positive\n", n);
if (n == 0)
	printf("%d is zero\n", n);
if (n < 0)
	printf("%d is negative\n", n);
return (0);
}
