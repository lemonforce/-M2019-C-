/*
����Ҫ���д���򣬴�ӡһ���߶�Ϊn�ġ��ɡ�*����ɵ�������ͼ����
*/

#include <stdio.h>

void printRow(int n,int a) {
	for (int i = 0; i < n-a; i++) {
		printf(" ");
	}
	for (int i = 0; i < a; i++) {
		printf("* ");
	}
	printf("\n");
	return;
}

int main() {
	int n = 0;
	scanf("%d", &n);
	for (int i = 1; i < n; i += 2) {
		printRow(n,i);
	}
	printRow(n,n);
	for (int i = n - 2; i >= 1; i -= 2) {
		printRow(n,i);
	}
	return 0;
}