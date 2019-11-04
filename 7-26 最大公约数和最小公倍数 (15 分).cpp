/*
本题要求两个给定正整数的最大公约数和最小公倍数。
*/

#include <stdio.h>

int main() {
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);
	int n1 = a, n2 = b;
	int maxComm = 0, leastComm = 0;
	int t = 0;
	while (b != 0) {
		t = a % b;
		a = b;
		b = t;
	}
	maxComm = a;
	leastComm = n1 / maxComm * n2;
	printf("%d %d", maxComm, leastComm);
	return 0;
}