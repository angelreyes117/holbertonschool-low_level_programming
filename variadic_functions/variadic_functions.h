#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

/**
 * struct printer - A structure that defines a symbol and a function pointer.
 * @symbol: The symbol representing the type to print (e.g., 'c' for char,
 *          'i' for int, etc.).
 * @print: A function pointer to corresponding print function for that type.
 */
typedef struct printer
{
char *symbol;          /* Symbol representing the type to print */
void (*print)(va_list arg);  /* Function pointer to the print function */
} printer_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */
