/*
����Ҫ���д����ͳ�Ʋ����ĳ�����ַ��ڸ����ַ����г��ֵĴ�����
*/

#include <stdio.h>
#include <string.h>

#define MAXN 85

int main() {
	char s[MAXN] = "";
	gets_s(s);
	int i = 0;
	int cnt = 0;
	char ch = ' ';
	scanf("%c", &ch);
	while (s[i] != '\0') {
		if (s[i++] == ch) {
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}