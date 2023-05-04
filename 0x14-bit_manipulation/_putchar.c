#include "main.h"
#include <unistd.h>
/**
 * _putchar - Writes Char c to stdout
 * @c: char to print
 *
 * Return: On success 1.
 * On error, returned -1 , and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
