/*

����Ҫ��ʵ��һ���ж������ļ򵥺����������øú�����֤��°ͺղ��룺�κ�һ����С��6��ż�����ɱ�ʾΪ����������֮�͡�
��������ֻ�ܱ�1��������������������ע�⣺1����������2��������
�����ӿڶ��壺
int prime( int p );
void Goldbach( int n );
���к���prime���û��������pΪ����ʱ����1�����򷵻�0������Goldbach���ո�ʽ��n=p+q�����n�������ֽ⣬����p��q��Ϊ������
����Ϊ�����ķֽⲻΨһ������24���Էֽ�Ϊ5+19�������Էֽ�Ϊ7+17����Ҫ�����������н���p��С�Ľ⡣

����������
89 100
���������
89 is a prime number
90 = 7 + 83, 92 = 3 + 89, 94 = 5 + 89, 96 = 7 + 89, 98 = 19 + 79
100 = 3 + 97

*/


#include <stdio.h>
#include <math.h>

int prime(int p);
void Goldbach(int n);

int main() {
	int m, n, i, cnt;

	scanf("%d %d", &m, &n);
	if (prime(m) != 0) printf("%d is a prime number\n", m);
	if (m < 6) m = 6;
	if (m % 2) m++;
	cnt = 0;
	for (i = m; i <= n; i += 2) {
		Goldbach(i);
		cnt++;
		if (cnt % 5) printf(", ");
		else printf("\n");
	}

	return 0;
}

//����prime���û��������pΪ����ʱ����1�����򷵻�0
int prime(int p) {
	if (p < 2) {
		return 0;
	}
	else {
		for (int i = 2; i <= sqrt(p); i++) {
			if (p % i == 0) {
				return 0;
			}
		}
	}
	return 1;
}

//����Goldbach���ո�ʽ��n=p+q�����n�������ֽ⣬����p��q��Ϊ������
//����Ϊ�����ķֽⲻΨһ������24���Էֽ�Ϊ5 + 19�������Էֽ�Ϊ7 + 17��
//Ҫ�����������н���p��С�Ľ�
void Goldbach(int n) {

	for (int i = 3; i <= n / 2; i++) {
		if (prime(i) && prime(n - i)) {
			printf("%d=%d+%d", n, i, n - i);
			break;
		}
	}
}