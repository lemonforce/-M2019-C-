/*
本题要求计算并输出不超过n的最大的k个素数以及它们的和。

输入格式:
输入在一行中给出n(10≤n≤10000)和k(1≤k≤10)的值。
输出格式:
在一行中按下列格式输出:

素数1+素数2+…+素数k=总和值
其中素数按递减顺序输出。若n以内不够k个素数，则按实际个数输出。
*/
#include <stdio.h>
#include <math.h>

//是素数为1，否则为0
int isPrime(int a) {
	for (int i = 2; i <= (int)sqrt(a); i++) {
		if (a % i == 0) {
			return 0;
		}
	}
	return 1;
}
void getPrime(int a[]) {
	int num[10001] = { 0 };
	for (int i = 0; i < 10001; i++) {
		num[i] = 1;
	}
	int k = 0;
	for (int i = 2; i < 10001; i++) {
		if (num[i]) {
			if (isPrime(i)) {
				a[k] = i;
				k++;
			}
			//删除
			for (int j = 2;; j++) {
				int t = j * i;
				if (t > 10000) {
					break;
				}
				if (num[t]) {
					num[t] = 0;
				}
			}
		}
	}
	return;
}

int main() {
	int a[1300] = { 0 };
	getPrime(a);
	
	int n = 0, k = 0;
	scanf("%d%d", &n, &k);

	int t = 0;	//小于n的最大素数下标
	while (a[t] <= n) {
		t++;
	}
	t--;
	int sum = a[t--];
	printf("%d", sum);
	
	for (int i = 1; i < k; i++) {
		if (t < 0) {
			break;
		}
		else {
			printf("+%d", a[t]);
			sum += a[t];
			t--;
		}
	}
	printf("=%d\n", sum);
	return 0;
}
