#include "main.h"
/**
 * _printf - function that produces output according to a format
 * @format: format.
 * Return: the number of characters printed.
**/
int _printf(const char *format, ...)
{
va_list p_list;
int i = 0;
int len;
if (format == NULL)
return (-1);
va_start(p_list, format);
while (format != NULL && format[i] != '\0')
i++;
len = i;
i = 0;
if (format)
{
while (format[i]){
write(1,&format[i], len);
i++;
}
}
va_end(p_list);
}

