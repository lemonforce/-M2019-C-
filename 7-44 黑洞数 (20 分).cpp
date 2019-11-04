/*
�ڶ���Ҳ��Ϊ���������ֳơ�Kaprekar���⡱����һ���������ת�����Ե�����

�κ�һ����λ���ֲ�ȫ��ͬ����λ���������޴Ρ�������������
�ܻ�õ�495��������õ�495��Ϊ��λ�ڶ�����
��ν����������������ɸ������������ź��
�������ȥ���ź����С������6174Ϊ��λ�ڶ�������

���磬����λ��207��

��1���������ã�720 - 27 �� 693��
��2���������ã�963 - 369 �� 594��
��3���������ã�954 - 459 �� 495��
�Ժ��ͣ����495��һ�ڶ����������λ����3������ȫ��ͬ��һ��ת����Ϊ0��

��������һ����λ������̸����������Ĺ��̡�

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