#include <stdlib.h>
#include <stdio.h>
/**
 */
int main(int argc, char *argv[])
{
	int ic;
	int iv;
	int sum = 0;

	for (ic = 1; ic < argc; ic++ )
	{
		for (iv = 0; argv[ic][iv] != '\0'; iv++)
		{
		if (argv[ic][iv] < '0' || argv[ic][iv] > '9')
		{
			printf("Error\n");
			return (1);
		}
		}

	sum += atoi(argv[ic]);
	}
	printf("%d\n", sum);
	return (0);
}
