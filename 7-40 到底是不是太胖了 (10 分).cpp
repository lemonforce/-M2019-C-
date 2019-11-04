/*
据说一个人的标准体重应该是其身高（单位：厘米）减去100、
再乘以0.9所得到的公斤数。真实体重与标准体重误差
在10%以内都是完美身材（即 | 真实体重 − 标准体重 | < 标准体重×10%）。
已知市斤是公斤的两倍。现给定一群人的身高和实际体重，请你告诉他们是否太胖或太瘦了。
*/

#include <stdio.h>
#include <math.h>

void judge(int height, int weight) {
	double pWeight = 0.0;
	pWeight = 2.0*(height - 100) * 0.9;
	if (fabs(pWeight-weight)<pWeight * 0.1) {
		printf("You are wan mei!\n");
	}
	else if (pWeight < weight) {
		printf("You are tai pang le!\n");
	}
	else {
		printf("You are tai shou le!\n");
	}
}

int main() {
	int N = 0;
	int height[100] = { 0 };
	int weight[100] = { 0 };
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d%d", &height[i], &weight[i]);
	}
	for (int i = 0; i < N; i++) {
		judge(height[i], weight[i]);
	}
	return 0;
}