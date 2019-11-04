/*
本题要求实现一个字符串查找的简单函数。

函数接口定义：
char *search( char *s, char *t );
函数search在字符串s中查找子串t，返回子串t在s中的首地址。若未找到，则返回NULL。

输入样例1：
The C Programming Language
ram
输出样例1：
10
输入样例2：
The C Programming Language
bored
输出样例2：
-1

*/

//在字符串s中查找子串t，返回子串t在s中的首地址。若未找到，则返回NULL。
#include <stdio.h>
char *search(char *s, char *t) {
	int i = 0, j = 0;
	int ans = 0;
	int first = 1;
	while (s[i] != '\0') {
		while (s[i] == t[j] && t[j] != '\0') {
			if (first) {
				ans = i;
				first = 0;
			}
			i++;
			j++;
		}
		//如果t[j]是最后一个，则表明找到了
		if (t[j] == '\0') {
			return &s[ans];
		}
		else {
			i++;
			j = 0;
			first = 1;
		}
		
	}
	return NULL;
}