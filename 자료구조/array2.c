#include <stdio.h>

void copy_array(int a[], int b[], int len)
{

	int i;
	for (i = 0; i < len; i++)
		b[i] = a[i];
}

void copy_variable(int a, int b)
{
	b = a;
}

void main_array2()
{
	int A[5] = { 10,20,30 };
	int B[5], i, x = 2018, y = 0;

	copy_variable(x, y);
	copy_variable(A, B, 5);

	printf("���� ���� ���: x=%d, y=%d\n", x, y);
	printf("�迭 ���� ���: \n");
	for (i = 0; i < 5; i++)
	{
		printf("A[%d] = %d\t", i, A[i]);
		printf("B[%d] = %d\n", i, B[i]);
	}
}