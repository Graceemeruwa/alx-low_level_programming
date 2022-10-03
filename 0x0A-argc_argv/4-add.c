#include <stdio.h>

#include <stdlib.h>


/**
 *main - entry point
 *
 *Description: Adds positive numbers
 *
 *@argc: amount of arguments passed through the program
 *@argv: pointer that contains the arrays of the arguments
 *
 *Return: the sum of the numbers, if no number is passed then print 0, if a
 *number has symbols that are not digit then print Error and return 1
 */

int main(int argc, char *argv[])
{
int num, digit, sum = 0;
for (num = 1; num < argc; num++)
{
for (digit = 0; argv[num][digit]; digit++)
{
if (argv[num][digit] < "0" || argv[num][digit] > "9")
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[num]);
}
printf("%d\n", sum);
return (0);
}
