#include "main.h"
/*
 * main entry point
 * 
 * returns success 
 */

int main(void)
{
	char *sh = "_putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
