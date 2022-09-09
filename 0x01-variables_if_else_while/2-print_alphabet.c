#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
<<<<<<< HEAD
 * Description: prints alphabet in lowercase then uppercase
=======
 * Description: prints alphabet in lowercase
>>>>>>> 38529c7c38a62bc11e2b4cc084dd6eb95cd60e2f
 * Return: Always 0 (success)
 */
int main(void)
{
int ch;

<<<<<<< HEAD
	for (ch = 'a'; ch <= 'z')
{
putchar(ch);
}
	for (ch++;)
{
putchar(ch);
}
putchar('\n');
=======
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
>>>>>>> 38529c7c38a62bc11e2b4cc084dd6eb95cd60e2f
return (0);
}
