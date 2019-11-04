#include <stdio.h>

int getNew(int a) {
	int sum = 0;
	while (a) {
		sum += a % 10;
		a /= 10;
	}
	return sum * 3 + 1;
}

int main() {
	int a = 0;
	scanf("%d", &a);
	int t = a;
	for (int i = 1; ; i++) {
		a = getNew(a);	//为什么a = getNew(a)是错的，而a = getNew(t)是对的
		//问题出在，第一次就结束的时候。

		printf("%d:%d\n",i, a);
		if (t != a) {
			t = a;
		}
		else {
			break;
		}
	}
	return 0;
}