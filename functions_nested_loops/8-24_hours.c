#include "main.h"
/**
 */
void jack_bauer(void)
{
	int hora, minuto;

	for (hora = 0; hora < 24; hora++)
	{
	for (minuto = 0; minuto < 60; minuto++)
	{
	_putchar("%02d:%02d\n", hora, minuto);
	}
	}
}
