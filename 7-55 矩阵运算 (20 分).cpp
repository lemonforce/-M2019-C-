/*
����һ��n��n�ķ���
����Ҫ�����þ�������Խ��ߡ�
���һ�к����һ�����������Ԫ��֮�͡�
���Խ���Ϊ�Ӿ�������Ͻ������½ǵ����ߡ�
*/

#include <stdio.h>
#define MAXN 15

int main() {
	int a[MAXN][MAXN] = { 0 };
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
		}
	}

	int sum = 0;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (i + j == n - 1) {
				continue;
			}
			sum += a[i][j];
		}
	}
	printf("%d", sum);
	return 0;
}