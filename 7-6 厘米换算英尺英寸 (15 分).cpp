/*
如果已知英制长度的英尺foot和英寸inch的值，那么对应的米是(foot+inch/12)×0.3048。现在，如果用户输入的是厘米数，
那么对应英制长度的英尺和英寸是多少呢？别忘了1英尺等于12英寸。
*/
//题目保证厘米数转换成英寸是整数？	答案为否

#include <stdio.h>

int main() {
	int foot = 0, inch = 0;
	int centmeter = 0;
	scanf("%d", &centmeter);
	int tmpinch = 0;
	tmpinch = (int)(((double)centmeter) / 30.48 * 12.0);
	inch = tmpinch % 12;
	foot = tmpinch / 12;
	printf("%d %d", foot, inch);
	return 0;
}