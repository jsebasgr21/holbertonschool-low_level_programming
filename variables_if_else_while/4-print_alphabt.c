#include<stdio.h>
/**
 * main - print the abecedary without q and e
 *
 *
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		if (abc != 'q' && abc != 'e')
		{
		putchar(abc);
		}
	}
	putchar('\n');
	return (0);
}
