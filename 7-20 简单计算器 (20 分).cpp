/*
模拟简单运算器的工作。假设计算器只能进行加减乘除运算，
运算数和结果都是整数，四种运算符的优先级相同，按从左到右的顺序计算。
*/

#include<stdio.h>
int main() {
	int a = 0, b = 0;
	char m;
	scanf("%d", &a);
	while (scanf("%c",&m))
	{
		switch (m) {
		case '+':
			scanf("%d", &b);
			a += b;
			break;
		case '-':
			scanf("%d", &b);
			a -= b;
			break;
		case '*':
			scanf("%d", &b);
			a *= b;
			break;
		case '/':
			scanf("%d", &b);
			if (b == 0)
			{
				printf("ERROR\n");
				return 0;
			}
			else
			{
				a /= b;
				break;
			}
		case '=':
			printf("%d\n", a);
			return 0;
		default:
			printf("ERROR\n");
			return 0;
		}
	}
	return 0;
}
