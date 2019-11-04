/*
һ���Ϸ������֤������17λ���������ڱ�ź�˳���ż�1λУ������ɡ�У����ļ���������£�

���ȶ�ǰ17λ���ּ�Ȩ��ͣ�Ȩ�ط���Ϊ��{7��9��10��5��8��4��2��1��6��3��7��9��10��5��8��4��2}��
Ȼ�󽫼���ĺͶ�11ȡģ�õ�ֵZ����������¹�ϵ��ӦZֵ��У����M��ֵ��

Z��0 1 2 3 4 5 6 7 8 9 10
M��1 0 X 9 8 7 6 5 4 3 2
���ڸ���һЩ���֤���룬������֤У�������Ч�ԣ������������ĺ��롣
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
	int pass[MAXN] = { 0 };		//�������֤�Ƿ���ȷ��1��ʾ�д���0��ʾ�޴���
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