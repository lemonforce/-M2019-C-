/*
��������ˮ�����ֱ���ƻ����apple�����棨pear�������ӣ�orange�������ѣ�grape����
���۷ֱ��ӦΪ3.00Ԫ/���2.50Ԫ/���4.10Ԫ/���10.20Ԫ/���

��������Ļ����ʾ���²˵���
[1] apple
[2] pear
[3] orange
[4] grape
[0] exit
�û�����������1~4��ѯ��Ӧˮ���ĵ��ۡ�
��������ѯ��������5��ʱ������Ӧ�Զ��˳���ѯ��
����5�ζ��û�����0���˳�������������ţ���ʾ�۸�Ϊ0��
*/

#include <stdio.h>

int main() {
	int cnt = 0;
	double a[5] = { 0.0, 3.0, 2.5, 4.1, 10.20 };
	double b[5] = { 0 };
	int n = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &n);
		if (n == 0) {
			break;
		}
		else if (n < 0 || n > 4) {
			b[i] = 0.0;
			cnt++;
		}
		else {
			b[i] = a[n];
			cnt++;
		}
	}
	printf("[1] apple\n[2] pear\n[3] orange\n[4] grape\n[0] exit\n");
	for (int i = 0; i < cnt; i++) {
		printf("price = %.2lf\n", b[i]);
	}
	return 0;
}