/*

本题要求实现一个计算复数之积的简单函数。

函数接口定义：
struct complex multiply(struct complex x, struct complex y);
其中struct complex是复数结构体，其定义如下：

struct complex{
	int real;
	int imag;
};

输入样例：
3 4 5 6
输出样例：
(3+4i) * (5+6i) = -9 + 38i

*/

#include <stdio.h>

struct complex {
	int real;
	int imag;
};

struct complex multiply(struct complex x, struct complex y);

int main() {
	struct complex product, x, y;

	scanf("%d%d%d%d", &x.real, &x.imag, &y.real, &y.imag);
	product = multiply(x, y);
	printf("(%d+%di) * (%d+%di) = %d + %di\n",
		x.real, x.imag, y.real, y.imag, product.real, product.imag);

	return 0;
}

//本题要求实现一个计算复数之积的简单函数。

//struct complex {
//	int real;
//	int imag;
//};

struct complex multiply(struct complex x, struct complex y) {
	struct complex result;
	result.real = x.real*y.real - x.imag*y.imag;
	result.imag = x.imag*y.real + x.real*y.imag;
	return result;
}