/*
����N��ѧ���Ļ�����Ϣ������ѧ�ţ���5��������ɵ��ַ�������
����������С��10�Ĳ������հ��ַ��ķǿ��ַ�����
��3�ſγ̵ĳɼ���[0,100]�����ڵ���������Ҫ������ܷ����ѧ����������ѧ�ź��ܷ֡�
*/

#include <stdio.h>

#define MAXLEN 10
#define MAXN 10
typedef struct Student Stu;
struct Student {
	int N0 = 0;
	char name[MAXLEN] = "";
	int lesson[3] = {0};
};

int main() {
	Stu stu[MAXN];
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &stu[i].N0);
		scanf("%s", stu[i].name);
		for (int j = 0; j < 3; j++) {
			scanf("%d", stu[i].lesson + j);
		}
	}

	int max = -350, maxno = 0;
	//for (int i = 0; i < 3; i++) {
	//	max += stu[0].lesson[i];
	//}
	for (int i = 0; i < n; i++) {
		int t = 0;
		for (int j = 0; j < 3; j++) {
			t += stu[i].lesson[j];
		}
		if (max < t) {
			max = t;
			maxno = i;
		}
	}
	printf("%s %05d %d", stu[maxno].name, stu[maxno].N0, max);
	return 0;
}