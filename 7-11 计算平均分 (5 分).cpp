/*
已知某位学生的数学、英语和计算机课程的成绩分别是
87分、72分和93分，求该生3门课程的平均成绩（结果按整型输出）。
*/
#include <stdio.h>

int main() {
	int ave = (87 + 72 + 93) / 3;
	printf("math = 87, eng = 72, comp = 93, average = %d", ave);
	return 0;
}