/*
�������һ���������Ӹ�λ��ʼ��λ�ָ������ĸ�λ���֡�
*/

#include <stdio.h>

int main() {
	int digit = 0;
	int a[100] = { 0 };
	int num = 0;
	scanf("%d", &num);
	if (num == 0) {
		printf("0 ");
		return 0;
	}
	while (num) {
		a[digit] = num % 10;
		num /= 10;
		digit++;
	}
	
	for (digit -= 1; digit >= 0; digit--) {
		printf("%d ", a[digit]);
	}
	return 0;
}