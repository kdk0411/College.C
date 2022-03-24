#include <stdio.h>

typedef struct
{
	double real;  // ���Ҽ��� �Ǽ���
	double imag;  // ���Ҽ��� �����
} Complex;

void printf_complex(Complex c)
{
	printf("%4.1f + %4.1fi\n", c.real, c.imag);
}
void reset_complex(Complex c)
{
	c.real = c.imag = 0.0;
}

void main_array3()
{
	Complex a = { 1.0, 2.0 };
	printf("�ʱ�ȭ ����: ");
	printf_complex(a);            // ���Ҽ� ȭ�� ���
	reset_complex(a);             // �ʱ�ȭ�� ���� ����
	printf("�ʱ�ȭ ����: ");
	printf_complex(a);            // ���Ҽ� ȭ�� ���
}