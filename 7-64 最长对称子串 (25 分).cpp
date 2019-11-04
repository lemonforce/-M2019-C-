/*
对给定的字符串，本题要求你输出最长对称子串的长度。
例如，给定Is PAT&TAP symmetric?，最长对称子串为s PAT&TAP s，于是你应该输出11。
*/


//只是解决问题，不是最好的答案
#include <stdio.h>	
#include <string.h>

#define MAXN 1010

int main() {
	char s[MAXN] = "";
	gets_s(s);
	int max = 0;
	int len = strlen(s);
	for (int i = 1; i < len - 1; i++) {
		int j = 1;
		int cnt = 0;
		//这个只能检测是奇数的情况，不能测出偶数的情况
		while (i + j < len && i - j >= 0 && s[i - j] == s[i + j]) {
			cnt++;
			j++;
		}
		if (max < cnt) {
			max = cnt;
		}
	}
	max = max * 2 + 1;

	for (int i = 1; i < len; i++) {
		int j = 1;
		int cnt = 0;
		//这个只能检测是偶数的情况，不能测出奇数的情况
		while (i + j - 1 < len && i - j >= 0 && s[i - j] == s[i + j - 1]) {
			cnt++;
			j++;
		}
		cnt *= 2;
		if (max < cnt) {
			max = cnt;
		}
	}
	printf("%d\n", max);
	return 0;
}