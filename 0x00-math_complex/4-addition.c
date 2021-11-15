#include "holberton"
/**
 * addition - performs the addition operation to complex numbers
 * @c1: complex
 * @c2: complex
 * @c3: pointer complex
 */
void addition(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re + c2.re;
        c3->im = c1.im + c2.im;
}
