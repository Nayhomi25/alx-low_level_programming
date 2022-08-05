#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *seperator, unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_i(va_list list, char *s);
void print_c(va_list list, char *sep);
void print_s(va_list list, char *sep);
void print_f(va_list list, char *sep);
/**
 * struct typ - Struct operators
 *
 * @c: Char
 * @tp: The function associated
 */
typedef struct typ
{
	char *c;
	void (*tp)(va_list var);
} typ_t;
#endif
