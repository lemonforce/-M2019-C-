/*
����һ�����������ÿ�����ֶ�Ӧ��ƴ����������Ϊ����ʱ�������fu�֡�
*/

#include <stdio.h>

int main() {
	char s[10][8] = {
		"ling","yi","er",
		"san","si","wu",
		"liu","qi","ba",
		"jiu"
	};
	int a = 0;
	scanf("%d", &a);

	//0��������
	if (a == 0) {
		printf("%s", s[0]);
		return 0;
	}

	if (a < 0) {
		printf("fu ");
		a = a * -1;
	}
	int n[100] = { 0 };
	int digit = 0;
	int tag = 1;
	while (a > 0) {
		n[digit] = a % 10;
		a /= 10;
		digit++;
	}
	for (int i = digit-1; i >= 0; i--) {
		if (tag) {
			printf("%s", s[n[i]]);
			tag = 0;
		}
		else {
			printf(" %s", s[n[i]]);
		}
	}
	return 0;
}