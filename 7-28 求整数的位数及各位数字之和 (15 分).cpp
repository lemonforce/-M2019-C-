/*
���ڸ�����������N��������λ�������λ����֮�͡�
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