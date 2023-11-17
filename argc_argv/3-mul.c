#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplica dos argumentos
 * @argc: argument counter
 * @argv: argument vector
 * Return: return 1 if have mor than 2 arguments or 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	int num1 = atoi(argv[1]);
        int num2 = atoi(argv[2]);
        int resultado = num1 * num2;

	printf("%d\n", resultado);
	return (0);
}
