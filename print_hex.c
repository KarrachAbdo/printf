#include "main.h"
/**
 * print_hex - converte to hex
 *@n : an int
 *Return: int
 */
int print_hex(unsigned int n)
{
unsigned int num = n;
const char *hex = "0123456789abcdf";
char buffer[BUFER_SIZE];
char *str = &buffer[BUFER_SIZE];
*str = '\0';
do {
*--str = hex[num % 16];
num /= 16;
} while (num != 0);
return (print_string(str));
}
