/*
ģ����������Ĺ��������������ֻ�ܽ��мӼ��˳����㣬
�������ͽ��������������������������ȼ���ͬ���������ҵ�˳����㡣
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
