/*
�ڹ������ӽ������ܣ��ܳ���һ�������ܵ����ܵ��߿�����ؽ�����Ϣ��
�ڹ�ÿ���ӿ���ǰ��3�ף�����ÿ����ǰ��9�ף��������ڹ��ܵ�����
���ÿ϶�����Ӯ�ڹ꣬���ǣ�ÿ��10���ӻ�ͷ��һ���ڹ꣬
�������Լ������ڹ꣬����·����Ϣ��ÿ����Ϣ30���ӣ�
���������10���ӣ����ڹ�ǳ�Ŭ����һֱ�ܣ�����Ϣ��
�ٶ��ڹ���������ͬһ���ͬһʱ�̿�ʼ���ܣ�
����T���Ӻ��ڹ������˭�ܵÿ죿
*/

#include <stdio.h>
#include <string.h>

int main() {
	int tDistance = 0, rDistance = 0;
	int T = 0, t = 0, rRest = 30, rRun = 10;
	int rTag = 0;	//0��ʾ��Ϣ��1��ʾ�ܲ�
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		if (t == 0) {
			if (rDistance > tDistance) {
				rTag = 0;
				t = 30;
			}
			else {
				rTag = 1;
				t = 10;
			}
		}
		tDistance += 3;
		if (rTag) {
			rDistance += 9;
			t--;
		}
		else {
			t--;
		}
	}

	char s[5];
	int distance = 0;
	if (tDistance > rDistance) {
		strcpy(s, "@_@");
		distance = tDistance;
	}
	else if (tDistance < rDistance) {
		strcpy(s, "^_^");
		distance = rDistance;
	}
	else {
		strcpy(s, "-_-");
		distance = rDistance;
	}
	printf("%s %d", s, distance);
	return 0;
}