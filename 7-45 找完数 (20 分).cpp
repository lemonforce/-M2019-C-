/*
��ν�������Ǹ���ǡ�õ��ڳ������������֮�͡�
���磺6=1+2+3������1��2��3Ϊ6�����ӡ�
����Ҫ���д�����ҳ�������������m��n֮�������������
*/
//���������򵥣���Ӧ�ó���ʹ����������

#include <stdio.h>

int main() {
	int m = 2, n = 10000;
	int a[5000] = { 0 };
	int tag = 1;
	scanf("%d%d", &m,&n);
	for (int i = m; i <= n; i++) {
		int t = 0, sum = 1;
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				a[t] = j;
				t++;
				sum += j;
			}
		}
		if (sum == i) {
			tag = 0;
			printf("%d = 1",i);
			for (int k = 0; k < t; k++) {
				printf(" + %d", a[k]);
			}
			printf("\n");
		}
		
	}
	if (tag) {
		printf("None\n");
	}
	return 0;
}