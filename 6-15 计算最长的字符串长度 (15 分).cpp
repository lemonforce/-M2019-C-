/*
����Ҫ��ʵ��һ�����������ڼ�����n��Ԫ�ص�ָ������s������ַ����ĳ��ȡ�

�����ӿڶ��壺
int max_len( char *s[], int n );
����n���ַ����洢��s[]�У�����max_lenӦ����������ַ����ĳ��ȡ�
*/
#include <stdio.h>
#include <string.h>
int max_len(char *s[], int n) {
	int maxn = 0;
	for (int i = 0; i < n; i++) {
		int len = strlen(s[i]);
		if (maxn < len) {
			maxn = len;
		}
	}
	return maxn;
}