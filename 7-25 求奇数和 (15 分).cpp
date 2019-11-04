/*
本题要求计算给定的一系列正整数中奇数的和。
*/
#include <stdio.h>

int main() {
	int a = 0;
	int sum = 0;
	scanf("%d", &a);
	while (a > 0) {
		if (a % 2 ==1) {
			sum += a;
		}
		scanf("%d", &a);
	}
	printf("%d", sum);
	return 0;
}