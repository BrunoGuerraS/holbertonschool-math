#include "holberton.h"
/**
 * display_complex_number - displays the complex numbers
 * @c: complex
 */
void display_complex_number(complex c)
{
	char i;

	i = (c.im < 0) ? '-' : '+';

	if (c.im == 0)
	{
		printf("%.9g\n", c.re);
	}
	else
	{
		c.im = (c.im < 0) ? -(c.im) : c.im;
		if (c.im == 1)
		{
			printf("%.9g %c i\n", c.re, i);
			return;
		}
		else if (c.im == -1)
		{
			printf("%.9g %c -i\n", c.re, i);
			return;
		}
		printf("%.9g %c %.9gi\n", c.re, i, c.im);
	}
}
