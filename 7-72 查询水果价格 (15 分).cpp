/*
给定四种水果，分别是苹果（apple）、梨（pear）、桔子（orange）、葡萄（grape），
单价分别对应为3.00元/公斤、2.50元/公斤、4.10元/公斤、10.20元/公斤。

首先在屏幕上显示以下菜单：
[1] apple
[2] pear
[3] orange
[4] grape
[0] exit
用户可以输入编号1~4查询对应水果的单价。
当连续查询次数超过5次时，程序应自动退出查询；
不到5次而用户输入0即退出；输入其他编号，显示价格为0。
*/

#include <stdio.h>

int main() {
	int cnt = 0;
	double a[5] = { 0.0, 3.0, 2.5, 4.1, 10.20 };
	double b[5] = { 0 };
	int n = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &n);
		if (n == 0) {
			break;
		}
		else if (n < 0 || n > 4) {
			b[i] = 0.0;
			cnt++;
		}
		else {
			b[i] = a[n];
			cnt++;
		}
	}
	printf("[1] apple\n[2] pear\n[3] orange\n[4] grape\n[0] exit\n");
	for (int i = 0; i < cnt; i++) {
		printf("price = %.2lf\n", b[i]);
	}
	return 0;
}