#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10x the alphabet, in lowercase
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	int n, mult;
	
	mult = 0;
	
	while (mult < 10) 
	{ 
	    for (n = 'a'; n <= 'z'; n++)
	    {
	        _putchar(n);
	    }
	    mult++;
	    _putchar('\n');
	}
}
