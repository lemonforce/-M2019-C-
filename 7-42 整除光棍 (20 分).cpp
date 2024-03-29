/*
这里所谓的“光棍”，并不是指单身汪啦~ 说的是全部由1组成的数字，
比如1、11、111、1111等。传说任何一个光棍都能被一个不以5结尾的奇数整除。
比如，111111就可以被13整除。 现在，你的程序要读入一个整数x，
这个整数一定是奇数并且不以5结尾。然后，经过计算，
输出两个数字：第一个数字s，表示x乘以s是一个光棍，
第二个数字n是这个光棍的位数。这样的解当然不是唯一的,题目要求你输出最小的解。

提示：一个显然的办法是逐渐增加光棍的位数，直到可以整除x为止。
但难点在于，s可能是个非常大的数 —— 比如，程序输入31，
那么就输出3584229390681和15，
因为31乘以3584229390681的结果是111111111111111，一共15个1。
*/

//数很大超过了unsigned long long ,需要模拟除法运算
#include <stdio.h>
#include <string.h>

int main() {

	char a[501][1000] = {};	//保存商
	int digit[501] = { 1 };	//保存位数

	for (int i = 0; i < 500; i++) {
		digit[i] = 1;
	}
	for (int i = 1; i < 1000; i += 2) {
		//i是奇数
		if (i % 5 == 0) {
			continue;
		}
		int t = (i - 1) / 2;	//存储下标

		//找到比奇数i大的数
		int num = 1;	//第一个比奇数i大的数
		while (num < i) {
			num = num * 10 + 1;
			digit[t]++;
		}
		int k = 0;	//商中的存储下标
		a[t][k++] = '0' + num / i;
		int r = num % i;	//余数
		while (r != 0) {
			r = r * 10 + 1;
			a[t][k++] = '0' + r / i;
			digit[t]++;
			r = r % i;                               
		}
		a[t][k] = '\0';
	}
	int n = 0;
	scanf("%d", &n);

	int t = (n - 1) / 2;
	printf("%s %d", a[t], digit[t]);

	return 0;
}