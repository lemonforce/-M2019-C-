﻿/*
给定一个华氏温度F，本题要求编写程序，计算对应的摄氏温度C。
计算公式：C=5×(F−32)/9。题目保证输入与输出均在整型范围内
*/

#include <stdio.h>

int main() {
	int F = 0;

	scanf("%d", &F);
	int C = 5 * (F - 32) / 9;
	printf("Celsius = %d", C);
	return 0;
}