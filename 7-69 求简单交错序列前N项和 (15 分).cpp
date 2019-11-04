/*
本题要求编写程序,计算序列 1 - 1/4 + 1/7 - 1/10 + ... 的前N项之和。
*/

#include <stdio.h>

int main() {
	int sign = -1;
	int n = 0;
	scanf("%d", &n);
	double s = 0.0;
	for (int i = 0; i < n; i++) {
		sign *= -1.0;
		s += 1.0*sign / (1.0 + 3.0*i);
	}
	printf("sum = %.3lf\n", s);
	return 0;
}