#include "main.h"

/**
 * _printf - send string to stdout
 *
 * @format: string passed
 *
 * Return: return length
 */

int _printf(const char *format, ...)
{
	va_list print;
	int i, j = 0, len = 0;
	char ch,*str;

	va_start(print, format);
	if (*format)
	{
		for (i = 0; format[i] != '\0'; i++)
		{
			if (format[i] != '%')
			{
				_putchar(format[i]);
				len++;
				continue;
			}
			switch (format[i + 1])
			{
				case 'c':
					ch = va_arg(print, int);
					_putchar(ch);
					i++;
					len++;
					break;
				case 's':
					str = va_arg(print, char *);
					while (str[j])
					{
						_putchar(str[j]);
						j++;
					}
					i++;
					break;
