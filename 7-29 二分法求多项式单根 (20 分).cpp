/*
二分法求函数根的原理为：如果连续函数f(x)在区间[a,b]的两个端点取值异号，
即f(a)f(b)<0，则它在这个区间内至少存在1个根r，即f(r)=0。

二分法的步骤为：
检查区间长度，如果小于给定阈值，则停止，输出区间中点(a+b)/2；否则
如果f(a)f(b)<0，则计算中点的值f((a+b)/2)；
如果f((a+b)/2)正好为0，则(a+b)/2就是要求的根；否则
如果f((a+b)/2)与f(a)同号，则说明根在区间[(a+b)/2,b]，令a=(a+b)/2，重复循环；
如果f((a+b)/2)与f(b)同号，则说明根在区间[a,(a+b)/2]，令b=(a+b)/2，重复循环。
本题目要求编写程序，计算给定3阶多项式f(x)=a3x3+a2x2+a1x+a0
​​ 在给定区间[a,b]内的根。
*/

#include <stdio.h>
#include <math.h>

double fx(double A[], double x) {
	double result = 0;
	result = A[3] * pow(x, 3) + A[2] * pow(x, 2) + A[1] * x + A[0];
	return result;
}

int main() {
	double a = 0.0, b = 0.0;
	double A[4] = { 0 };
	double t = 0.0;
	for (int i = 3; i >= 0; i--) {
		scanf("%lf", &A[i]);
	}
	scanf("%lf %lf", &a, &b);
	if (fx(A, a) == 0) {
		t = a;
	}
	else if (fx(A, b) == 0) {
		t = b;
	}
	else {
		while (true) {
			t = (a + b) / 2;
			if (b - a < 0.01) {
				break;
			}
			if (fx(A, a)*fx(A, b) < 0) {
				if (fx(A, t) == 0.0) {
					break;
				}
				else if (fx(A, a) * fx(A, t) > 0) {
					a = t;
				}
				else {
					b = t;
				}
			}
		}
	}
	printf("%.2lf", t);
	return 0;
}