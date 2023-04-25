#include "main.h"
/**
 * print_int - print an int
 *@n : an int
 *Return: int
 */
int print_int(int n)
{
int count = 0; 
if (n < 0)
{
count += print_char('-');
n = -n;
}
if (n / 10)
count += print_int(n / 10);
count += print_char(n % 10 + '0');
return (count);
}
