#include "main.h"
/**
 * print_bin - converte to binaire
 *@n : an int
 *Return: int
 */
int print_bin(unsigned int n)
{
unsigned int num = n;
int j, bits = 0;
char *str = malloc(sizeof(char));
if (n == 0)
bits = 1;
else
{
while (n != 0)
{
n /= 2;
bits++;
}
}
for (j = bits - 1; j >= 0; j--)
{
str = realloc(str, (sizeof(char) + 1));
str[j] = num % 2 + '0';
num /= 2;
}
print_string(str);
free(str);
return (bits);
}
