/*
����Ҫ���д���򣬼������� 1 + 1/3 + 1/5 + ... ��ǰN��֮�͡�
*/

#include <stdio.h>

int main() {
	int n = 0;
	scanf("%d", &n);
	double s = 0.0;
	for (int i = 0; i < n; i++) {
		s += 1.0 / (1.0 + 2.0 * i);
	}
	printf("sum = %.6lf\n", s);
	return 0;
}