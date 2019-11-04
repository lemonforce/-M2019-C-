/*
����Ҫ��ʵ�ֺ��������Ը����±���ҵ����ڣ����ض�Ӧ����š�

���	����
0	Sunday
1	Monday
2	Tuesday
3	Wednesday
4	Thursday
5	Friday
6	Saturday
�����ӿڶ��壺
int getindex( char *s );
����getindexӦ�����ַ���s��š��������Ĳ���s����һ���������ڵ��ַ������򷵻�-1��
*/
#include <stdio.h>
#include <string.h>

#define MAXS 80

int getindex(char *s);

int main() {
	int n;
	char s[MAXS];

	scanf("%s", s);
	n = getindex(s);
	if (n == -1) printf("wrong input!\n");
	else printf("%d\n", n);

	return 0;
}

int getindex(char *s) {
	char week[7][10] = {
		"Sunday","Monday","Tuesday","Wednesday",
		"Thursday","Friday","Saturday"
	};
	for (int i = 0; i < 7; i++) {
		if (!strcmp(week[i],s)) {
			return i;
		}
	}
	return -1;

}