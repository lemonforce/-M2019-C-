/*
Ӣ�ĸ�����ĸ�ǳ�A��E��I��O��U�������ĸ��
����Ҫ���д����ͳ�Ƹ����ַ����д�д������ĸ�ĸ�����
*/

#include <stdio.h>
#include <string.h>

#define MAXN 85
int main() {
	char s[MAXN] = "";
	int cnt = 0;
	gets_s(s);
	int len = strlen(s);
	for (int i = 0; i < len; i++) {
		if (s[i] > 'A' && s[i] <= 'Z') {
			if (s[i] == 'E' || s[i] == 'I'|| s[i] == 'O'|| s[i] == 'U') {
				continue;
			}
			else {
				cnt++;
			}
		}
	}
	printf("%d\n", cnt);
	return 0;
}