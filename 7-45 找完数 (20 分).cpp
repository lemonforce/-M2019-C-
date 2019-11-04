/*
所谓完数就是该数恰好等于除自身外的因子之和。
例如：6=1+2+3，其中1、2、3为6的因子。
本题要求编写程序，找出任意两正整数m和n之间的所有完数。
*/
//用数组做简单，但应该尝试使用链表做。

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