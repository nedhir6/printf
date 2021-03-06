#ifndef _HOLBERTON_H
#define _HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int _putchar(char c);
int _printf(const char *format, ...);
int _char(va_list spec);
int _string(va_list spec);
int _percentage(__attribute__((unused))va_list spec);
int _integer(va_list spec);
int get_specifier_functions(char c, va_list pa);
typedef struct specifiers
{
char t;
int (*f)(va_list pa);
} type_t;

#endif
