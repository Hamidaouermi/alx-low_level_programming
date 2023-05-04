#include "main.h"

/**
 * flip_bits - counts num of bits to Change
 * to Get from one num to another
 * @x: first num
 * @y: second num
 *
 * Return: num of bits to Change
 */
unsigned int flip_bits(unsigned long int x, unsigned long int y)
{
	int h, count = 0;
	unsigned long int current;
	unsigned long int exclusive = x ^ y;

	for (h = 63; h >= 0; h--)
	{
		current = exclusive >> h;
		if (current & 1)
			count++;
	}

	return (count);
}
