#include "main.h"

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0
 *     */
int main(void)
{
	int len;

	len = _printf("Let's try %% to printf a simple sentence.\n");
	/*len2 = printf("Let's try to printf a simple sentence.\n");*/
	_printf("Length:[%d, %i]\n", len, len);
	_printf("%c\n", 'a');
	_printf("%s\n", "world");
	return (0);
}
