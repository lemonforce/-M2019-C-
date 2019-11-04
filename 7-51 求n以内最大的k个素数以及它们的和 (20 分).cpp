/*
����Ҫ����㲢���������n������k�������Լ����ǵĺ͡�

�����ʽ:
������һ���и���n(10��n��10000)��k(1��k��10)��ֵ��
�����ʽ:
��һ���а����и�ʽ���:

����1+����2+��+����k=�ܺ�ֵ
�����������ݼ�˳���������n���ڲ���k����������ʵ�ʸ��������
*/
#include <stdio.h>
#include <math.h>

//������Ϊ1������Ϊ0
int isPrime(int a) {
	for (int i = 2; i <= (int)sqrt(a); i++) {
		if (a % i == 0) {
			return 0;
		}
	}
	return 1;
}
void getPrime(int a[]) {
	int num[10001] = { 0 };
	for (int i = 0; i < 10001; i++) {
		num[i] = 1;
	}
	int k = 0;
	for (int i = 2; i < 10001; i++) {
		if (num[i]) {
			if (isPrime(i)) {
				a[k] = i;
				k++;
			}
			//ɾ��
			for (int j = 2;; j++) {
				int t = j * i;
				if (t > 10000) {
					break;
				}
				if (num[t]) {
					num[t] = 0;
				}
			}
		}
	}
	return;
}

int main() {
	int a[1300] = { 0 };
	getPrime(a);
	
	int n = 0, k = 0;
	scanf("%d%d", &n, &k);

	int t = 0;	//С��n����������±�
	while (a[t] <= n) {
		t++;
	}
	t--;
	int sum = a[t--];
	printf("%d", sum);
	
	for (int i = 1; i < k; i++) {
		if (t < 0) {
			break;
		}
		else {
			printf("+%d", a[t]);
			sum += a[t];
			t--;
		}
	}
	printf("=%d\n", sum);
	return 0;
}
