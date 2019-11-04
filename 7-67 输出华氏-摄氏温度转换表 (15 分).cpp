/*
输入2个正整数lower和upper（lower≤upper≤100），
请输出一张取值范围为[lower，upper]、且每次增加2华氏度的华氏-摄氏温度转换表。

温度转换的计算公式：C=5×(F−32)/9，其中：C表示摄氏温度，F表示华氏温度。
*/

#include <stdio.h>

double F2C(int F) {
	double C = 0.0;
	C = 5.0 * (F - 32.0) / 9.0;
	return C;
}
int main() {
	int lower = 0, upper = 0;
	scanf("%d%d", &lower, &upper);
	if (upper > 100 || lower > upper) {
		printf("Invalid.\n");
		return 0;
	}
	else {
		printf("fahr celsius\n");
		double C = 0.0;
		for (int i = lower; i <= upper; i += 2) {
			C = F2C(i);
			printf("%d%6.1lf\n", i, C);
		}
	}
	return 0;
}