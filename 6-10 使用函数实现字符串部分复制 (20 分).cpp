/*
本题要求编写函数，将输入字符串t中从第m个字符开始的全部字符复制到字符串s中。

函数接口定义：
void strmcpy( char *t, int m, char *s );
函数strmcpy将输入字符串char *t中从第m个字符开始的全部字符复制到字符串char *s中。
若m超过输入字符串的长度，则结果字符串应为空串。

输入样例：
7
happy new year
输出样例：
new year

*/
#include <stdio.h>
#define MAXN 20

//函数strmcpy将输入字符串char *t中从第m个字符开始的全部字符复制到字符串char *s中。
//若m超过输入字符串的长度，则结果字符串应为空串。
void strmcpy(char *t, int m, char *s) {
	int lenT = 0;
	int i = 0;
	while (t[i] != '\0') {
		i++;
	}
	lenT = i;
	if (lenT < m) {
		s[0] = '\0';
		return;
	}
	else {
		i = m - 1;
		int j = 0;
		while (t[i] != '\0') {
			s[j] = t[i];
			j++;
			i++;
		}
		return;
	}
}