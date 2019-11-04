/*
��ν���������󡱣���ָ�����������N��
��1��N��N�����ִ����Ͻǵ�1�����ӿ�ʼ��
��˳ʱ����������˳������N��N�ķ��������Ҫ������������������
*/

#include <stdio.h>
#define MAXN 15
int main() {
	int a[MAXN][MAXN] = { 0 };
	int n = 0;
	int num = 1;
	scanf("%d", &n);
	int start = 0, end = n;
	while (end-start > 0) {
		for (int i = start; i < end; i++) {
			a[start][i] = num++;
		}
		for (int i = start + 1; i < end - 1; i++) {
			a[i][end-1] = num++;
		}
		for (int i = end - 1; i >= start; i--) {
			if (!a[end - 1][i]) {
				a[end - 1][i] = num++;
			}
		}
		for (int i = end - 2; i > start; i--) {
			a[i][start] = num++;
		}
		start++;
		end--;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}