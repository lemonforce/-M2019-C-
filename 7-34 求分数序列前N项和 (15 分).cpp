/*
计算序列 2/1+3/2+5/3+8/5+... 的前N项之和。
注意该序列从第2项起，
每一项的分子是前一项分子与分母的和，分母是前一项的分子。
*/

#include <stdio.h>

int main() {
	double numerator = 2;
	double denominator = 1;
	double t = denominator;
	double result = 0.0;
	int N = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		result +=  numerator / denominator;

		t = denominator;
		denominator = numerator;
		numerator += t;
	}
	printf("%.2lf\n", result);
	return 0;
}

/*

#include <stdio.h>

int main() {
	int numerator = 2;
	int denominator = 1;
	int t = denominator;
	double result = 0.0;
	int N = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		result +=  1.0 * numerator / denominator;

		t = denominator;
		denominator = numerator;
		numerator += t;
	}
	printf("%.2lf\n", result);
	return 0;
}
*/
//这是错误的，可能会导致精度不足？？？