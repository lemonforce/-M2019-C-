/*
����4�������ĺ���ƽ��ֵ����Ŀ��֤����������������ͷ�Χ��
*/

#include <stdio.h>
const int MAXN = 4;
int main() {
	int a[MAXN] = { 0 };
	int sum = 0;
	double average = 0.0;
	for (int i = 0; i < MAXN; i++)
	{
		scanf("%d", a + i);
		sum += a[i];
	}
	average = (double)sum / MAXN * 1.0;
	printf("Sum = %d; Average = %.1lf\n", sum, average);
	return 0;
}