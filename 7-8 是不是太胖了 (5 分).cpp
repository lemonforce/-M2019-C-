/*
据说一个人的标准体重应该是其身高（单位：厘米）
减去100、再乘以0.9所得到的公斤数。
已知市斤是公斤的两倍。现给定某人身高，
请你计算其标准体重应该是多少？（
顺便也悄悄给自己算一下吧……）
*/

#include <stdio.h>

int main() {
	int height = 0;
	double weight = 0.0;
	scanf("%d", &height);
	weight = 2.0 * (height - 100) * 0.9;
	printf("%.1lf", weight);
	return 0;
}