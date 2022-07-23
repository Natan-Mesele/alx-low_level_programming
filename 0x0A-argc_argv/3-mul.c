#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two numbers
 * @argc: arguement count
 * @argv: array of pointers to arguement strings
 * Return: result of multiplication or 1
 **/
int main(int argc, char *argv[])
{
int a, b, result;
result = 1;
if (argc <= 3)
{
printf("Error\n");
return (1);
}
/* atoi convert a string to an int */
for (index = 1; index < argc; index++
{
result = result * atoi(argc[index]);
}
printf("%d\n", result);
return (0);
}
