/*
�������� 2/1+3/2+5/3+8/5+... ��ǰN��֮�͡�
ע������дӵ�2����
ÿһ��ķ�����ǰһ��������ĸ�ĺͣ���ĸ��ǰһ��ķ��ӡ�
*/

#include <stdio.h>

int main() {
	double numerator = 2;
	double denominator = 1;
	double t = denominator;
	double result = 0.0;
	int N = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		result +=  numerator / denominator;

		t = denominator;
		denominator = numerator;
		numerator += t;
	}
	printf("%.2lf\n", result);
	return 0;
}

/*

#include <stdio.h>

int main() {
	int numerator = 2;
	int denominator = 1;
	int t = denominator;
	double result = 0.0;
	int N = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		result +=  1.0 * numerator / denominator;

		t = denominator;
		denominator = numerator;
		numerator += t;
	}
	printf("%.2lf\n", result);
	return 0;
}
*/
//���Ǵ���ģ����ܻᵼ�¾��Ȳ��㣿����