/*
自然常数 e 可以用级数 1+1/1!+1/2!+⋯+1/n!+⋯ 来近似计算。
本题要求对给定的非负整数 n，求该级数的前 n+1 项和。
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
	double s = 1.0;
	int n = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		s += 1.0 / factorial(i);
		if (i == 11) {
			break;
		}
		//printf("第%d个：%.8lf\n", i, s);
	}
	printf("%.8lf\n", s);
	return 0;
}