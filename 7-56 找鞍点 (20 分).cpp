/*
一个矩阵元素的“鞍点”是指该位置上的元素值在该行上最大、在该列上最小。

本题要求编写程序，求一个给定的n阶方阵的鞍点。
*/

#include <stdio.h>

#define MAXN 8

int checkMin(int a[MAXN][MAXN],int n, int row, int column) {
	//验证列中最小的
	int t = row;
	for (int k = 0; k < n; k++) {
		if (a[row][column] > a[k][column]) {
			row = k;
			break;
		}
	}
	if (t == row) {
		return 1;
	}
	else {
		return 0;
	}
}
int main() {
	int a[MAXN][MAXN] = { 0 };
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	int row[MAXN] = { 0 };
	int column[MAXN] = { 0 };
	int cnt = 0;
	int tag = 0;
	//行
	for (int i = 0; i < n; i++) {
		//列 
		//找到行中最大的
		int maxj = 0;
		for (int j = 0; j < n; j++) {
			if (a[i][maxj] < a[i][j]) {
				maxj = j;
			}
		}
		//有可能最大的一样
		for (int j = 0; j < n; j++) {
			if (a[i][maxj] == a[i][j]) {
				row[cnt] = i;
				column[cnt] = j;
				cnt++;
			}
		}
	}
	int resulti = -1;
	for (int i = 0; i < cnt; i++) {
		tag = checkMin(a, n, row[i], column[i]);
		if (tag) {
			resulti = i;
			break;
		}
	}
	if (tag) {
		printf("%d %d", row[resulti], column[resulti]);
	}
	else {
		printf("NONE");
	}
	return 0;
}