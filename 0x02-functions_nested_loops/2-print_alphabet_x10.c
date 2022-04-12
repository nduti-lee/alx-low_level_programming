#include "main.h"

/**
* print_alphabet_x10 - print alphabet
*
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
char C;
int I;

I = 0;
while (I < 10)
{
for (C = 'a'; C <= 'z'; C++)
{
_putchar(C);
}

I++;
_putchar('\n');
}

}
