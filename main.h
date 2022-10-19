#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *struct p- holds format specifiers
 *@va: type to print
 *@f: funtion to print
 */
typedef struct p
{
		char va
		int (*f)(va_list);
}point;

int _printf(const char *format, ...);
int (*check_for_specifiers(const char *format))(va_list);
void _putchar(char s);
int print_c(va_list c);
int print_s(va_list s);
int print_d(va_list d);
int print_i(va_list i);


#endif /* MAIN_H */
