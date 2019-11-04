/*
本题要求编写程序，
计算序列部分和 1 - 1/4 + 1/7 - 1/10 + ... 
直到最后一项的绝对值不大于给定精度eps。
*/

#include <stdio.h>

double eachResult(int n) {
	return 1.0 / (1.0 + 3.0*n);
}

int main() {
	double eps = 0.0;
	scanf("%le", &eps);
	int i = 0;
	double s = 1.0;
	double t = 1;
	double sign = -1.0;
	while (t > eps) {
		t = eachResult(++i);
		s += t * sign;
		sign *= -1.0;
	}
	//s += t*sign*-1;
	printf("sum = %.6lf\n", s);
	return 0;
}