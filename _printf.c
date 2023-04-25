#include "main.h"
/**
 * _printf - function that produces output according to a format
 * @format: format.
 * Return: the number of characters printed.
 **/
int _printf(const char *format, ...)
{
int i, j, count = 0;
char *s;
va_list args;
if (format == NULL || *format == '\0')
return (-1);
va_start(args, format);
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] != '%')
count += print_char(format[i]);
else
{i++;
switch (format[i])
{
case 'c':
count += print_char(va_arg(args, int));
break;
case 's':{
s = va_arg(args, char *);
if (s == NULL)
s = "(null)";
count += print_string(s);
break; }
case 'd':
case 'i':{
count += print_int(va_arg(args, int));
break; }
case '%':
count += print_char('%');
break;
default:{
count += print_char('%');
count += print_char(format[i]);
break; }}}}
va_end(args);
return (count); }
