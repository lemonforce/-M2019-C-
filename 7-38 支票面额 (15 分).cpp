/*
һ���ɹ�Աȥ���жһ�һ��yԪf�ֵ�֧Ʊ��
�������Ա�����fԪy�֡�
�ɹ�Ա��ȥ��n��֮��ŷ����д�
����������������2yԪ2f�֣��ʸ�֧Ʊ����Ƕ��٣�
*/

#include <stdio.h>

int main() {
	int f = 0, y = 0, n = 0;
	int tag = 0;
	scanf("%d", &n);
	for (int i = 0; i < 50; i++) {
		for (int j = 0; j < 99; j++) {
			if (100 * j + i - n == 200 * i + 2 * j) {
				y = i;
				f = j;
				tag = 1;
				break;
			}
		}
	}
	if (tag) {
		printf("%d.%d\n", y, f);
	}
	else {
		printf("No Solution");
	}
	return 0;
}