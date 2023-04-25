#include "main.h"
#include <unistd.h>
/**
 * print_percent - writes the percent sign
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_percent(char c)
{
	return (write(1, "%%", 1));
}
