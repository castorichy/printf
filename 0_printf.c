#include "main.h"

/**
 * _printf - send string to stdout
 * @format: string passed
 *
 * Return: return length
 */

int _printf(const char *format, ...)
{
	va_list print;
	int i, j = 0, len = 0;

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
					len += charc(va_arg(print, int));
					i++;
					break;
				case 's':
					len += string(va_arg(print, char *));
					i++;
					break;
				case '%':
					_putchar(format[i]);
					i++;
					len++;
					break;
				default:
					_putchar(format[i]);
					len++;
					break;
			}
		}
		len++;
	}
	va_end(print);
	return (len - 1 + j);
}
/**
 * length - calculates the lenght of a string
 * @str: string
 *
 * Return: length
 */
int length(char *str)
{
	int i, len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}

/**
 * charc - prints a char
 *
 * @a: character
 *
 * Return: returns len;
 */
int charc(char a)
{
	_putchar(a);
	return (1);
}

/**
 * string - prints a string
 *
 * @str: string
 * Return: return length
 */

int string(char *str)
{
	int i, l = 0;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	l = length(str);
	return (l);
}
