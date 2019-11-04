/*
对于给定的正整数N，求它的位数及其各位数字之和。
*/

#include <stdio.h>
int main() {
	int num = 0;
	int digit = 0, digitSum = 0;
	int t = 0;
	scanf("%d", &num);
	while (num > 0) {
		digitSum += num % 10;
		num /= 10;
		digit++;
	}
	printf("%d %d\n", digit, digitSum);
	return 0;
}