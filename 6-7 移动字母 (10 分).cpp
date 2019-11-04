/*
本题要求编写函数，将输入字符串的前3个字符移到最后。

函数接口定义：
void Shift( char s[] );
其中char s[]是用户传入的字符串，题目保证其长度不小于3；函数Shift须将按照要求变换后的字符串仍然存在s[]里。

输入样例：
abcdef
输出样例：
defabc

*/

#include <stdio.h>
#include <string.h>

#define MAXS 10

void Shift(char s[]) {
	char chs[3];
	int i = 0;
	//暂存
	for (i = 0; i < 3; i++) {
		chs[i] = s[i];
	}
	i = 0;
	//移动
	while (s[i + 3] != '\0') {
		s[i] = s[i + 3];
		i++;
	}
	//复制
	int j = 0;
	while (s[i] != '\0') {
		s[i] = chs[j];
		j++;
		i++;
	}
}