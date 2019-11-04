/*
本题要求编写程序，将给定字符串中的大写英文字母按以下对应规则替换：

原字母	对应字母
A	Z
B	Y
C	X
D	W
…	…
X	C
Y	B
Z	A
*/

#include <stdio.h>
#include <string.h>

#define MAXN 85

int main() {
	char s[MAXN] = "";
	gets_s(s);
	int len = strlen(s);
	for (int i = 0; i < len; i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			s[i] = 'Z' - s[i] + 'A';
		}
	}
	puts(s);
	return 0;
}