#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * _printf - function that produces output according to a format
 * @format: format.
 * Return: the number of characters printed.
 **/
int _printf(const char *format, ...)
{
int i, j, count = 0;
char c, *s;
va_list args;
if (format == NULL)
return (-1);
va_start(args, format);
for (i = 0; format[i] != '\0'; i++)
{
if (format && format[i] != '\0)
{
write(1, &format[i], 1);
count++;
}
else
{
i++;
switch (format[i])
{
case 'c':
{
c = va_arg(args, int);
write(1, &c, 1);
count++;
break; }
case 's':
{
s = va_arg(args, char *);
for (j = 0; s[j] != '\0'; j++)
{
write(1, &s[j], 1);
count++; }
break; }
case '%':
{
write(1, "%", 1);
count++;
break;
}}}}
va_end(args);
return (count); }
