/**
 * _memcpy - copies memory area
 * @dest: el puntero a introduccir el lugar de memoria
 * @src: el puntero del que se va a copiar su lugar de memoria
 * @n: numero de bytes a copiar
 * Return: se retorna el lugar de memoria al puntero destino
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
