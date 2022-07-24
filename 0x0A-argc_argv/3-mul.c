#include <stdio.h>
#include <stdlib.h>
/**
 *  main - multiply two numbers
 *  @argc: arguement count
 *  @argv: array of pointers to arguement strings
 *
 *  Return: 0;
 **/
int main(int argc, char *argv[])
{
int index, multiplication;
multiplication = 1;
if (argc <= 3)
{
printf("Error\n");
return (1);
}
for (index = 1; index < argc; index++)
{
multiplication = multiplication * bar(argv[index]);
}
printf("%d\n", multiplication);
return (0);
}
