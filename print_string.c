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
		print_string("(null)");
		return (len);
	}

	while (str[len])
	{
		print_char(*str);
		len++;
	}
	return (len);
}
