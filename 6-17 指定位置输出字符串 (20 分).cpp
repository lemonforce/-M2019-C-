/*
����Ҫ��ʵ��һ���������Ը�����һ���ַ����������ַ���
��ӡ�������ַ����д����һ���ַ�ƥ���λ�ÿ�ʼ��
��ڶ����ַ�ƥ���λ��֮��������ַ���

�����ӿڶ��壺
char *match( char *s, char ch1, char ch2 );
����matchӦ��ӡs�д�ch1��ch2֮��������ַ������ҷ���ch1�ĵ�ַ��
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
