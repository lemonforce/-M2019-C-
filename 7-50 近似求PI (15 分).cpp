/*
����Ҫ���д���򣬸�����ʽ��еĽ���ֵ��ֱ�����һ��С�ڸ�������eps��
*/

#include <stdio.h>

double eachResult(int n) {
	double result = 1.0;
	for (int i = 1; i <= n; i++) {
		result = result * i / (2 * i + 1);
	}
	return result;
}

int main() {
	double result = 1.0;
	double eps = 0.0;
	scanf("%le", &eps);
	int i = 1;
	double t = 1.0;
	while (t >= eps) {
		t = eachResult(i);
		i++;
		result += t;
	}
	printf("PI = %.5lf", result * 2.0);
	return 0;
}