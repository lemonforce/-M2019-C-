/*
计算4个整数的和与平均值。题目保证输入与输出均在整型范围内
*/

#include <stdio.h>
const int MAXN = 4;
int main() {
	int a[MAXN] = { 0 };
	int sum = 0;
	double average = 0.0;
	for (int i = 0; i < MAXN; i++)
	{
		scanf("%d", a + i);
		sum += a[i];
	}
	average = (double)sum / MAXN * 1.0;
	printf("Sum = %d; Average = %.1lf\n", sum, average);
	return 0;
}