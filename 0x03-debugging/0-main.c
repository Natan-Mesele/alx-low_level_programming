#include <stdlib.h>
#include <time.h>
#include <stdio.h>
void positive_or_negative(int i){
int i;
srand(time(0));
n = i;
if (i > 0)
printf("%d is positive\n", i);
if (i == 0)
printf("%d is zero\n", i);
if (i < 0)
{
printf("%d is negative\n", i);
}
return (0);
}
/**
 * main - tests function that prints if integer is positive or negative
 * Return: 0
 */
int main(void)
{
int i;
i = 0;
positive_or_negative(i);
return (0);
}
