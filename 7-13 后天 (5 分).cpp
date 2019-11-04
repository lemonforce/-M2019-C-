/*
如果今天是星期三，后天就是星期五；
如果今天是星期六，后天就是星期一。
我们用数字1到7对应星期一到星期日。
给定某一天，请你输出那天的“后天”是星期几。
*/

#include <stdio.h>

int main() {
	int a[7] = { 0 };
	for (int i = 0; i < 7; i++)
	{
		a[i] = i + 1;
	}
	int day = 0;
	scanf("%d", &day);
	printf("%d", a[(day - 1 + 2) % 7]);
	return 0;
}