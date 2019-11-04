/*
本题要求编写程序，以hh:mm:ss的格式输出某给定时间再过n秒后的时间值
（超过23:59:59就从0点开始计时）。
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