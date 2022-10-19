#include "main.h"

/**
 * check_specifier - checks for a valid specifier
 * @format: specifier passed
 *
 * Return: pointer to valid fanction
 */

int (*check_specifier(const char *format))(va_list)
{
	unsigned int i;

	print s[] = {{"c", print_c},
				{"s", print_s},
				{"i", print_i },
				{"d", print_d},
				{NULL, NULL}
	};

	for (i = 0; *(s + i)->va != '\0'; i++)
	{
		if (*(s + i)->va == *format)
		{
			break;
		}
	}
	return (s[i].f);
}

/**
 *_printf- function that converts format specifiers
 *@format: string to be passed
 *Return: length of characters
 */

int _printf(const char *format, ...)
{
	unsigned int j, len = 0;
	va_list ap;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);

	va_start(ap, format);
	for (j = 0; format[j] != '\0'; j++)
	{
		for (j = 0; format[j] != '%' && format[j]; j++)
		{
			_putchar(format[j]);
			len++;
		}
		if (!format[j])
			return (len);
		f = check_specifier(&format[j + 1]);
		if (f != NULL)
		{
			len += f(ap);
			j += 2;
			continue;
		}
		if (!format[j + 1])
			return (-1);
		_putchar(format[j]);
		len++;
		if (format[j + 1] == '%')
			j += 2;
		else
			j++;
	}
	va_end(ap);
	return (len);

}
