#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <stdio.h>
/**
 * _printf - function that produces output according to a format
 * @format: format.
 * Return: the number of characters printed.
**/

int loc_por(const char *list,int lent,int start){
int j = start;
while (j <= lent)
{
if (list[j] == '%')
return (j);
j++;
}
return (-1);
}

int _printf(const char *format, ...)
{
va_list p_list;
int i = 0;
int len;
int tst;
if (format == NULL)
return (-1);
va_start(p_list, format);
while (format != NULL && format[i] != '\0')
i++;
len = i;
i = 0;
/**if (format)
{
write(1,&format[i], len);
}**/
tst = loc_por(format ,len, 9);
printf("%d \n",tst);

va_end(p_list);
return (0);
}

