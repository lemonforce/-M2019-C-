/*
����Ҫ���д�������жϸ�����һ���ַ��Ƿ�Ϊ�����ġ�����ν�����ġ���ָ˳���͵�����һ�����ַ������硰XYZYX���͡�xyzzyx�����ǻ��ġ�

�����ӿڶ��壺
bool palindrome( char *s );
����palindrome�ж������ַ���char *s�Ƿ�Ϊ���ġ������򷵻�true�����򷵻�false��

��������1��
thisistrueurtsisiht
�������1��
Yes
thisistrueurtsisiht
��������2��
thisisnottrue
�������2��
No
thisisnottrue
*/

#include <stdio.h>
#include <string.h>

#define MAXN 20


bool palindrome(char *s);

int main() {
	char s[MAXN];

	scanf("%s", s);
	if (palindrome(s) == true)
		printf("Yes\n");
	else
		printf("No\n");
	printf("%s\n", s);

	return 0;
}

/* ��Ĵ��뽫��Ƕ������ */

//����palindrome�ж������ַ���char *s�Ƿ�Ϊ���ġ������򷵻�true�����򷵻�false��
bool palindrome(char *s) {
	int len = strlen(s);
	for (int i = 0; i < len / 2; i++) {
		if (s[i] != s[len-i-1]) {
			return false;
		}
	}
	return true;
}