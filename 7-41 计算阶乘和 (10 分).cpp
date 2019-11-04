/*
对于给定的正整数N，需要你计算 S=1!+2!+3!+...+N!。
*/
#include <stdio.h>

int main() {
	int a[10] = { 0 };
	int mul = 1;
	for (int i = 1; i <= 10; i++) {
		mul *= i;
		a[i - 1] = mul;
	}
	int n = 0;
	scanf("%d", &n);
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	printf("%d", sum);
	return 0;
}