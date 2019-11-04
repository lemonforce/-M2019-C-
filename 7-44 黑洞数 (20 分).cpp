/*
黑洞数也称为陷阱数，又称“Kaprekar问题”，是一类具有奇特转换特性的数。

任何一个各位数字不全相同的三位数，经有限次“重排求差”操作，
总会得到495。最后所得的495即为三位黑洞数。
所谓“重排求差”操作即组成该数的数字重排后的
最大数减去重排后的最小数。（6174为四位黑洞数。）

例如，对三位数207：

第1次重排求差得：720 - 27 ＝ 693；
第2次重排求差得：963 - 369 ＝ 594；
第3次重排求差得：954 - 459 ＝ 495；
以后会停留在495这一黑洞数。如果三位数的3个数字全相同，一次转换后即为0。

任意输入一个三位数，编程给出重排求差的过程。

*/

#include <stdio.h>
int func(int num, int i);
void exchange(int *a, int *b);
int getNum(int a, int b, int c);

int func(int num,int i) {
	//get each digit num
	int a = 0, b = 0, c = 0;
	a = num / 100;
	b = num % 100 / 10;
	c = num % 10;

	//compare

	if (a<b) {
		exchange(&a, &b);
	}
	if (a<c) {
		exchange(&a, &c);
	}
	if (b<c) {
		exchange(&b, &c);
	}
	
	int maxnum = 0, minnum = 0;
	maxnum = getNum(a, b, c);
	minnum = getNum(c, b, a);
	int result = maxnum - minnum;
	printf("%d: %d - %d = %d\n",i,maxnum,minnum,result);
	return result;
}

//exchange
void exchange(int *a, int *b) {
	int t = *a;
	*a = *b;
	*b = t;
}

//getNum
int getNum(int a, int b, int c) {
	return a * 100 + b * 10 + c;
}

int main() {
	int num = 0;
	scanf("%d", &num);
	int i = 1;
	int fag = 0;
	fag = func(num, i);
	while (!(fag == 0 || fag == 495)) {
		i++;
		fag = func(fag, i);
	}
	return 0;
}