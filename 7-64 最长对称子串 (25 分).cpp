/*
�Ը������ַ���������Ҫ���������Գ��Ӵ��ĳ��ȡ�
���磬����Is PAT&TAP symmetric?����Գ��Ӵ�Ϊs PAT&TAP s��������Ӧ�����11��
*/


//ֻ�ǽ�����⣬������õĴ�
#include <stdio.h>	
#include <string.h>

#define MAXN 1010

int main() {
	char s[MAXN] = "";
	gets_s(s);
	int max = 0;
	int len = strlen(s);
	for (int i = 1; i < len - 1; i++) {
		int j = 1;
		int cnt = 0;
		//���ֻ�ܼ������������������ܲ��ż�������
		while (i + j < len && i - j >= 0 && s[i - j] == s[i + j]) {
			cnt++;
			j++;
		}
		if (max < cnt) {
			max = cnt;
		}
	}
	max = max * 2 + 1;

	for (int i = 1; i < len; i++) {
		int j = 1;
		int cnt = 0;
		//���ֻ�ܼ����ż������������ܲ�����������
		while (i + j - 1 < len && i - j >= 0 && s[i - j] == s[i + j - 1]) {
			cnt++;
			j++;
		}
		cnt *= 2;
		if (max < cnt) {
			max = cnt;
		}
	}
	printf("%d\n", max);
	return 0;
}