#include <stdio.h>

/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
int a, b, c;

for (a = 0; a < 8; a++)
{
for (b = a + 1; b < 9; b++)
{
for (c = b + 1; c < 10; c++)
{
putchar((a % 10) + '0');
putchar((b % 10) + '0');
putchar((c % 10) + '0');
}
}
}

putchar('\n');

return (0);

}
