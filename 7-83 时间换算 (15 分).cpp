/*
����Ҫ���д������hh:mm:ss�ĸ�ʽ���ĳ����ʱ���ٹ�n����ʱ��ֵ
������23:59:59�ʹ�0�㿪ʼ��ʱ����
*/

#include <stdio.h>

int main() {
	int h = 0, m = 0, s = 0;
	scanf("%d:%d:%d", &h, &m, &s);
	int t = 0;
	scanf("%d", &t);
	s += t;
	if (s > 59) {
		s -= 60;
		m++;
		if (m > 59) {
			m -= 60;
			h++;
			if (h > 23) {
				h -= 24;
			}
		}
	}
	printf("%02d:%02d:%02d", h, m, s);
	return 0;
}