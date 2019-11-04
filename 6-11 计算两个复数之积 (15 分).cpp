/*

����Ҫ��ʵ��һ�����㸴��֮���ļ򵥺�����

�����ӿڶ��壺
struct complex multiply(struct complex x, struct complex y);
����struct complex�Ǹ����ṹ�壬�䶨�����£�

struct complex{
	int real;
	int imag;
};

����������
3 4 5 6
���������
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

//����Ҫ��ʵ��һ�����㸴��֮���ļ򵥺�����

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