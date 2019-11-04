/*
计算交错序列 1-2/3+3/5-4/7+5/9-6/11+... 的前N项之和。
*/

#include <stdio.h>

int main() {
	int N = 0;
	scanf("%d", &N);
	int i = 1;
//	bool tag = false;
	int numerator = 1, denominator = 1;
	double sign = 1.0;
	double result = 0.0;
	while (numerator <= N) {
		result += sign * numerator / denominator;
		sign *= -1.0;
		numerator++;
		denominator = numerator + i;
		i++;
	}
	printf("%.3lf", result);
	return 0;
}