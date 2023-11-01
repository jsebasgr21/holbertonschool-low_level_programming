#include <stdio.h>
/**
 * main - alfabeto en lower y uper case
 *
 *
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char abc;
	char ABC;

	for (abc = 'a'; abc <= 'z'; abc++)
{
	putchar(abc);
}
	for (ABC = 'A'; ABC <= 'Z'; ABC++)
{
	putchar(ABC);
}
	putchar('\n');
	return (0);
}
