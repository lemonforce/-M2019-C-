/*
����Ҫ��ʵ��һ���ж������ļ򵥺������Լ����øú���������������������͵ĺ�����

��������ֻ�ܱ�1��������������������ע�⣺1����������2��������

�����ӿڶ��壺
int prime( int p );
int PrimeSum( int m, int n );
���к���prime���û��������pΪ����ʱ����1�����򷵻�0������PrimeSum��������[m, n]�����������ĺ͡���Ŀ��֤�û�����Ĳ���m��n��

����������
- 1 10
���������
Sum of(2 3 5 7) = 17
*/
#include <stdio.h>
#include <math.h>

int prime(int p);
int PrimeSum(int m, int n);

int main() {
	int m, n, p;

	scanf("%d %d", &m, &n);
	printf("Sum of ( ");
	for (p = m; p <= n; p++) {
		if (prime(p) != 0)
			printf("%d ", p);
	}
	printf(") = %d\n", PrimeSum(m, n));

	return 0;
}
//����ʱ����1�����򷵻�0
int prime(int p) {
	if (p < 2) {
		return 0;
	}
	for (int i = 2; i <= sqrt(p); i++) {
		if (p%i == 0) {
			return 0;
		}
	}
	return 1;
}

//��������[m, n]�����������ĺ�
int PrimeSum(int m, int n) {
	int sum = 0;
	for (int i = m; i <= n; i++) {
		if (prime(i)) {
			sum += i;
		}
	}
	return sum;
}