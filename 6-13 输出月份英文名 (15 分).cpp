/*
本题要求实现函数，可以返回一个给定月份的英文名称。

函数接口定义：
char *getmonth( int n );
函数getmonth应返回存储了n对应的月份英文名称的字符串头指针。
如果传入的参数n不是一个代表月份的数字，则返回空指针NULL。
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