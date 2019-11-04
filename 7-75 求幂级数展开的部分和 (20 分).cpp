/*
已知函数ex
​​可以展开为幂级数1+x+x2/2!+x3/3!+⋯+xk/k!+⋯。
现给定一个实数x，要求利用此幂级数部分和求ex
​​的近似值，求和一直继续到最后一项的绝对值小于0.00001。
*/

#include <stdio.h>

double func(double x, int k) {
	double s = 1.0;
	for (int i = 1; i <= k; i++) {
		s *= x / i;
	}
	return s;
}

int main() {
	double x = 0.0;
	scanf("%lf", &x);
	double s = 1.0;
	int i = 1;
	double t = 1.0;
	while (t > 0.00001) {
		t = func(x, i++);
		s += t;
	}
	printf("%.4lf", s);
	return 0;
}