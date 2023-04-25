#include "main.h"
/**
 * print_string - fuction that print a string
 *@str : string
 *Return: int
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
