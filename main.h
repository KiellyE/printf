#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>


typedef struct format
{
	char *id;
	int (*f)();
} func_handler;


int pointer_speci(va_list val);
int hex_helper_printf(unsigned long int num);
int HEX_helper_printf(unsigned int num);
int xstring_speci(va_list val);
int HEX_speci(va_list val);
int hex_speci(va_list val);
int octal_speci(va_list val);
int unsigned_speci(va_list args);
int strrev_speci(va_list args);
int rot13ed_speci(va_list args);
int _strlen(char *s);
int _strlenc(const char *s);
int deci_speci(va_list val);
int int_speci(va_list val);
int mdlus_speci(void);
int bin_speci(va_list val);
int char_speci(va_list val);
int str_speci(va_list val);
int _std_output(char c);
int _printf(const char *format, ...);

#endif