#include <string.h>
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
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
