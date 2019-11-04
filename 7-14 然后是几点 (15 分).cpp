/*
有时候人们用四位数字表示一个时间，
比如1106表示11点零6分。
现在，你的程序要根据起始时间和流逝的时间计算出终止时间。

读入两个数字，第一个数字以这样的四位数字表示当前时间，
第二个数字表示分钟数，计算当前时间经过那么多分钟后是几点，
结果也表示为四位数字。当小时为个位数时，没有前导的零，
即5点30分表示为530。注意，第二个数字表示的分钟数可能超过60，
也可能是负数。
题目保证起始时间和终止时间在同一天内。
*/

#include <stdio.h>

int main() {
	int hour = 0;
	int min = 0;
	int before = 0;
	int after = 0;
	int time = 0;
	scanf("%d %d", &before, &time);
	hour = before / 100;
	min = before % 100;
	int totalmin = hour * 60 + min + time;
	after = totalmin / 60 * 100 + totalmin % 60;
	printf("%d\n", after);
	return 0;
}