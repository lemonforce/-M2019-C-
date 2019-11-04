/*
给定一个n×n的方阵，
本题要求计算该矩阵除副对角线、
最后一列和最后一行以外的所有元素之和。
副对角线为从矩阵的右上角至左下角的连线。
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