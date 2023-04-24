#include "main.h"
/**
 * print_string - hgzgh  ghgd dff
 *@str : strg intg
 *Return: back to zero
 */
int print_string(const char *str)
{
int len = 0;
if (str == NULL)
{
return (-1);
}
while (*str)
{
len += print_char(*str);
str++;
}
return (len);
}
