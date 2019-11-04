/*
本题要求编写程序，计算序列 1!+2!+3!+⋯ 的前N项之和。
*/

#include <stdio.h>

int factorial(int n) {
	int s = 1;
	for (int i = 2; i <= n; i++) {
		s *= i;
	}
	return s;
}

int main() {
	int n = 0;
	scanf("%d", &n);
	int s = 0;
	for (int i = 1; i <= n; i++) {
		s += factorial(i);
	}
	printf("%d\n", s);
	return 0;
}