/*
本题要求统计给定整数M和N区间内素数的个数并对它们求和。
*/

#include <stdio.h>
#include <math.h>

int isPrime(int a) {
	bool b = true;
	for (int i = 2; i <= sqrt(a); i++) {
		if (a%i == 0) {
			b = false;
			break;
		}
	}
	int result = 0;
	if (b) {
		result = a;
	}
	return result;
}

int main() {
	int a[251] = { 0 };
	int cnt = 0;
	for (int i = 2; i <= 500; i++) {
		int t = isPrime(i);
		if (t > 0) {
			a[cnt] = t;
			cnt++;
		}
	}
	int M = 0, N = 0;
	int count = 0, sum = 0;
	scanf("%d%d", &M, &N);
	for (int i = 0; i < cnt; i++) {
		if (a[i] < M) {
			continue;
		}
		else if(a[i] > N){
			break;
		}
		else {
			sum += a[i];
			count++;
		} 
	}
	printf("%d %d\n", count, sum);
	return 0;
}