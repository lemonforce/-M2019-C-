/*
本题要求编写程序将一个百分制成绩转换为五分制成绩。转换规则：

大于等于90分为A；
小于90且大于等于80为B；
小于80且大于等于70为C；
小于70且大于等于60为D；
小于60为E。
*/

#include <stdio.h>

int main() {
	int score = 0;
	scanf("%d", &score);
	char degree[] = "EEEEEEDCBAA";
	printf("%c", degree[score / 10]);
	return 0;
}