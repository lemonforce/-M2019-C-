/*
世界上不同国家有不同的写日期的习惯。比如美国人习惯写成“月-日-年”，
而中国人习惯写成“年-月-日”。下面请你写个程序，
自动把读入的美国格式的日期改写成中国习惯的日期。
*/

#include <stdio.h>

int main() {
	int year = 1900;
	int month = 1;
	int day = 1;
	scanf("%d-%d-%d", &month, &day, &year);
	printf("%d-%02d-%02d", year, month, day);
	return 0;
}