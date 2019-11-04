/*
本题要求实现一个函数，对给定的一个字符串和两个字符，
打印出给定字符串中从与第一个字符匹配的位置开始到
与第二个字符匹配的位置之间的所有字符。

函数接口定义：
char *match( char *s, char ch1, char ch2 );
函数match应打印s中从ch1到ch2之间的所有字符，并且返回ch1的地址。
*/
#include <stdio.h>
#include <string.h>

#define MAXS 10

char *match(char *s, char ch1, char ch2) {
	int start = strlen(s);
	int i = 0;
	while (s[i] != '\0') {
		if (s[i] == ch1) {
			start = i;
			break;
		}
		i++;
	}
	while (s[i] != '\0' ) {
		printf("%c", s[i]);
		if (s[i] == ch2) {
			break;
		}
		i++;
	}
	printf("\n");
	return s + start;
}
#include <stdio.h>

#define MAXS 10

char *match(char *s, char ch1, char ch2);

int main() {
	char str[MAXS], ch_start, ch_end, *p;

	scanf("%s\n", str);
	scanf("%c %c", &ch_start, &ch_end);
	p = match(str, ch_start, ch_end);
	printf("%s\n", p);

	return 0;
}
