#include "array7.c"
Polynomial read_poly()
{
	int i;
	Polynomial p;

	printf("���׽��� �ְ� ������ �Է��Ͻÿ�: ");
	scanf("%d", &p.degree);
	printf("�� ���� ����� �Է��Ͻÿ� (�� %d��): ", p.degree + 1);
	for (i = 0; i <= p.degree; i++)
		scanf("%f", p.coef + i);
	return p;
}