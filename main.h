#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#define BUFER_SIZE 1024
int print_bin(unsigned int n);
int print_char(char c);
int print_octa(unsigned int n);
int print_hex(unsigned int n);
int print_string(const char *str);
int print_int(int a);
int _printf(const char *format, ...);

#endif /* MAIN_H */
