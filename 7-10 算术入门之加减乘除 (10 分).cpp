/*
对于输入的两个整数，按照要求输出其和差积商。
输入格式:
在一行内输入两个不超过100的非负整数a和b，中间以一个空格间隔，且保证b不为0。

输出格式:
共四行，格式是：

[a] + [b] = [a+b]
[a] - [b] = [a-b]
[a] * [b] = [a*b]
[a] / [b] = [a/b]
其中，带有方括号的内容（如[a]、[b]、[a+b]等）表示相应整数或运算结果的值，在输出时要用实际的值代替。

并且：如果a能够被b整除，那么a/b应输出为整数格式，否则a/b输出为带两位小数的格式。

提示：注意表达式中的空格。
*/

#include <stdio.h>

int main() {
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	double c = 1.0 * a / b;
	if (c == (int)c)
	{
		printf("%d / %d = %d\n", a, b, a/b);
	}
	else
	{
		printf("%d / %d = %.2lf\n", a, b, c);
	}
	return 0;
}