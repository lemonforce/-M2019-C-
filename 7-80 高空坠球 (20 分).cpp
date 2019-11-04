/*
皮球从某给定高度自由落下，触地后反弹到原高度的一半，
再落下，再反弹，……，如此反复。问皮球在第n次落地时，
在空中一共经过多少距离？第n次反弹的高度是多少？
*/

#include <stdio.h>

int main() {
	int h = 0, n = 0;
	scanf("%d%d", &h, &n);
	double s = (double)h, last = (double)h;
	for (int i = 0; i < n;  i++) {
		if (i > 0) {
			s += last * 2.0;
		}
		last /= 2.0;
	}
	if (n == 0) {
		s = 0.0;
		last = 0.0;
	}
	printf("%.1lf %.1lf", s, last);
	return 0;
}
