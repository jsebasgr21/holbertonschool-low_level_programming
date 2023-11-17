#include <stdlib.h>
#include <stdio.h>
/**
 * main - imprime el nombre del archivo
 * @argc: argc
 * @argv: argv
 * Return: retorna 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
