/*
����Ҫ��ʵ��һ���򵥺������ҳ��������е����ֵ��

�����ӿڶ��壺
void findmax( int *px, int *py, int *pmax );
����px��px���û����������������ָ�롣
����findmaxӦ�ҳ�����ָ����ָ��������е����ֵ�������pmaxָ���λ�á�
*/

#include <stdio.h>

void findmax(int *px, int *py, int *pmax);

int main() {
	int max, x, y;

	scanf("%d %d", &x, &y);
	findmax(&x, &y, &max);
	printf("%d\n", max);

	return 0;
}

/* ��Ĵ��뽫��Ƕ������ */

void findmax(int *px, int *py, int *pmax) {
	*pmax = *px >= *py ? *px : *py;
}