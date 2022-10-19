#include "main.h"
/**
 * print_c - prints a character
 * @c: character
 *
 * Return: return length
 */

int print_c(va_list c)
{
	char chr = (char)va_arg(c, int);

	_putchar(chr);
	return (1);
}

/**
 * print_s - prints string
 * @s: string
 *
 * Return: length 
 */

int print_s(va_list s)
{
	unsigned int i, len = 0;
	char *str = (char *)va_arg(s, char *);

	for (i = 0; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + i));
		len++;
	}
	return (len);
}
