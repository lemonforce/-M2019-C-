/*
计算机内部用二进制来表达所有的值。一个十进制的数字，比如18，
在一个32位的计算机内部被表达为
00000000000000000000000000010010。可以看到，
从左边数过来，在第一个1之前，有27个0。我们把这些0称作前导的零。

现在，你的任务是写一个程序，输入一个整数，输出在32位表达下它前导的零的个数。
*/

#include <stdio.h>
#include <math.h>

int main() {
	unsigned int num = 0;	//为什么int ,long long 就是错的
	scanf("%lld", &num);
	int n = 0;
	while (pow(2, n) <= num) {
		n++;
	}
	n--;
	printf("%d", 31 - n);
	return 0;
}