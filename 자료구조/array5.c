#include "array7.c"
Polynomial read_poly()
{
	int i;
	Polynomial p;

	printf("다항식의 최고 차수를 입력하시오: ");
	scanf("%d", &p.degree);
	printf("각 항의 계수를 입력하시오 (총 %d개): ", p.degree + 1);
	for (i = 0; i <= p.degree; i++)
		scanf("%f", p.coef + i);
	return p;
}