/*
本题要求编写程序，先将输入的一系列整数中的最小值与第一个数交换，
然后将最大值与最后一个数交换，最后输出交换后的序列。
*/

#include <stdio.h>
#define MAXN 15
void swap(int *a, int*b) {
	int t = *a;
	*a = *b;
	*b = t;
	return;
}

int main() {
	int n = 0;
	int a[MAXN] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", a + i);
	}
	int maxi =0, mini = 0;
	for (int i = 0; i < n; i++) {
		if (a[mini] > a[i])
			mini = i;
	}
	swap(a, a + mini);
	for (int i = 0; i < n; i++) {
		if (a[maxi] < a[i])
			maxi = i;
	}
	swap(a + n - 1, a + maxi);
	for (int i = 0; i < n; i++) {
		printf("%d ", *(a + i));
	}
	return 0;
}