/*
һ��IP��ַ�����ĸ��ֽڣ�ÿ���ֽ�8��λ���Ķ���������ɡ�
�뽫32λ���������ʾ��IP��ַת��Ϊʮ���Ƹ�ʽ��ʾ��IP��ַ�����
*/

#include <stdio.h>
#include <math.h>

int main() {
	int a[4] = { 0 };
	char s[40] = "";
	scanf("%s", s);
	int k = 0;
	for (int i = 0; i < 4; i++) {
		int n = 7;
		for (int j = 0; j < 8; j++) {
			int t = s[k++]-'0';
			if (t) {
				a[i] += pow(2, n);
			}
			n--;
		}
	}
	printf("%d", a[0]);
	for (int i = 1; i < 4; i++) {
		printf(".%d", a[i]);
	}
}