/*
本题要求编写程序，打印一个高度为n的、由“*”组成的正菱形图案。
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