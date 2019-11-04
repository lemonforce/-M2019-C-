/*
本题要求编写程序，根据公式nCm(计算器)
​​ 算出从n个不同元素中取出m个元素（m≤n）的组合数。

建议定义和调用函数fact(n)计算n!，其中n的类型是int，函数类型是double。

*/

#include <stdio.h>

int fact(int n) {
	int r = 1;
	for (int i = 1; i <= n; i++) {
		r *= i;
	}
	return r;
}

int main() {
	int n = 1, m = 1;
	scanf("%d%d", &m, &n);
	if (m > n - m) {
		m = n - m;
	}
	int numerator = 1;
	for (int i = 0; i < m; i++) {
		numerator *= (n - i);
	}
	int result = 1.0;
	result =numerator / fact(m);
	printf("result = %d", result);
	return 0;
}