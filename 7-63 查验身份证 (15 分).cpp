/*
一个合法的身份证号码由17位地区、日期编号和顺序编号加1位校验码组成。校验码的计算规则如下：

首先对前17位数字加权求和，权重分配为：{7，9，10，5，8，4，2，1，6，3，7，9，10，5，8，4，2}；
然后将计算的和对11取模得到值Z；最后按照以下关系对应Z值与校验码M的值：

Z：0 1 2 3 4 5 6 7 8 9 10
M：1 0 X 9 8 7 6 5 4 3 2
现在给定一些身份证号码，请你验证校验码的有效性，并输出有问题的号码。
*/

#include <stdio.h>
#include <string.h>

#define MAXN 105
#define MAXLEN 20

int lastNum(char s) {
	int t = 0;
	switch (s) {
	case '1':
		t = 0;
		break;
	case '0':
		t = 1;
		break;
	case 'X':
		t = 2;
		break;
	case '9':
		t = 3;
		break;
	case '8':
		t = 4;
		break;
	case '7':
		t = 5;
		break;
	case '6':
		t = 6;
		break;
	case '5':
		t = 7;
		break;
	case '4':
		t = 8;
		break;
	case '3':
		t = 9;
		break;
	case '2':
		t = 10;
		break;
	default:
		t = 11;
		break;
	}
	return t;
}

int main() {
	char s[MAXN][MAXLEN] = {};
	int n = 0;
	scanf("%d\n", &n);
	for (int i = 0; i < n; i++) {
		gets_s(s[i]);
	}
	int pass[MAXN] = { 0 };		//保存身份证是否正确，1表示有错误，0表示无错误
	for (int i = 0; i < n; i++) {
		int a[18] = { 0 };
		for (int j = 0; j < 17; j++) {
			if (s[i][j] >= '0' && s[i][j] <= '9') {
				a[j] = s[i][j] - '0';
			}
			else {
				pass[i] = 1;
				break;
			}
		}
		if (pass[i]) {
			continue;
		}
		else {
			a[17] = lastNum(s[i][17]);
		}
		int z = 0;
		z = (a[0] * 7 + a[1] * 9 + a[2] * 10 + a[3] * 5 + a[4] * 8 +
			a[5] * 4 + a[6] * 2 + a[7] * 1 + a[8] * 6 + a[9] * 3 +
			a[10] * 7 + a[11] * 9 + a[12] * 10 + a[13] * 5 + a[14] * 8 +
			a[15] * 4 + a[16] * 2) % 11;
		if (z != a[17]) {
			pass[i] = 1;
		}
	}
	int tag = 1;
	for (int i = 0; i < n; i++) {
		if (pass[i]) {
			if (tag) {
				tag = 0;
			}
			puts(s[i]);
		}
	}
	if (tag) {
		printf("All passed");
	}
	return 0;
}