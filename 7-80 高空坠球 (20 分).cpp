/*
Ƥ���ĳ�����߶��������£����غ󷴵���ԭ�߶ȵ�һ�룬
�����£��ٷ�������������˷�������Ƥ���ڵ�n�����ʱ��
�ڿ���һ���������پ��룿��n�η����ĸ߶��Ƕ��٣�
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
