/*
����Ҫ��ʵ�ֺ��������Է���һ�������·ݵ�Ӣ�����ơ�

�����ӿڶ��壺
char *getmonth( int n );
����getmonthӦ���ش洢��n��Ӧ���·�Ӣ�����Ƶ��ַ���ͷָ�롣
�������Ĳ���n����һ�������·ݵ����֣��򷵻ؿ�ָ��NULL��
*/
#include <stdio.h>

#include <stdio.h>

char *getmonth(int n);

int main() {
	int n;
	char *s;

	scanf("%d", &n);
	s = getmonth(n);
	if (s == NULL) printf("wrong input!\n");
	else printf("%s\n", s);

	return 0;
}
char s[][25] = {
"January","February","March","April",
"May", "June","July" ,"August",
"September","October","November","December"
};
char *getmonth(int n) {
	char *month = NULL;
	if (n<=12) {
		month = s[n - 1];
	}
	return month;
}