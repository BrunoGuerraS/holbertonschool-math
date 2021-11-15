#include "holberton.h"
/**
 * multiplication - multiplication operation to complex numbers
 * @c1: complex
 * @c2: complex
 * @c3: pointer to complex
 */
void multiplication(complex c1, complex c2, complex *c3)
{
	c3->re = (c1.re * c2.re) - (c1.im * c2.im);
	c3->im = (c1.re * c2.im) + (c1.im * c2.re);
}
