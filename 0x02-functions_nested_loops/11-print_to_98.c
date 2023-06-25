#include "main.h"
#include "stdio.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The number to start printing from
 * Return: Always 0.
 */

void print_to_98(int n)

{
	if (n <= 98)
	{
	for (; n <= 98; n++)
	{
	if (n == 98)
	{
	printf("%d", n);
	printf("\n");

        int a, b, c, d;
        for (a = 0; a <= 2; a++)
        {
        for (b = 0; b <= 9; b++)
        {
        if ((a <= 1 && b <= 9) || (a <= 2 && b <= 3))
        {
        for (c = 0; c <= 5; c++)
        {
        for (d = 0; d <= 9; d++)
        {
        _putchar(a + '0');
        _putchar(b + '0');
        _putchar(58);
        _putchar(c + '0');
        _putchar(d + '0');
        _putchar('\n');
        }
        }
        }
        }
        }
}
