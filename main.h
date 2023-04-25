#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
int print_char(char c);
int print_string(const char *str);
int print_int(int a);
int _printf(const char *format, ...);

#endif /* MAIN_H */
