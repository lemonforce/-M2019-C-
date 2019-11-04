/*
本题要求实现一个函数，用于计算有n个元素的指针数组s中最长的字符串的长度。

函数接口定义：
int max_len( char *s[], int n );
其中n个字符串存储在s[]中，函数max_len应返回其中最长字符串的长度。
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