/*
����Ҫ��ʵ��һ�����ʵ����������С�����ֵļ򵥺�����

�����ӿڶ��壺
void splitfloat( float x, int *intpart, float *fracpart );
����x�Ǳ���ֵ�ʵ����0��x<10000����*intpart��*fracpart�ֱ��ǽ�ʵ��x��ֳ���������������С�����֡�

����������
2.718
���������
The integer part is 2
The fractional part is 0.718

*/

#include <stdio.h>

void splitfloat(float x, int *intpart, float *fracpart);

int main() {
	float x, fracpart;
	int intpart;

	scanf("%f", &x);
	splitfloat(x, &intpart, &fracpart);
	printf("The integer part is %d\n", intpart);
	printf("The fractional part is %g\n", fracpart);

	return 0;
}
//����x�Ǳ���ֵ�ʵ����0��x<10000����*intpart��*fracpart�ֱ��ǽ�ʵ��x��ֳ���������������С�����֡�
void splitfloat(float x, int *intpart, float *fracpart) {
	*intpart = (int)x;
	*fracpart = x - *intpart;
}