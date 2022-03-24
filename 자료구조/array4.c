#include "array7.c"
void print_poly(Polynomial p, char str[])
{
	int i;
	printf("\t%s", str);
	for (i = 0; i < p.degree; i++)
		printf("%5.1f x^%d + ", p.coef[i], p.degree - i);
	printf("%4.1f\n", p.coef[p.degree]);
}