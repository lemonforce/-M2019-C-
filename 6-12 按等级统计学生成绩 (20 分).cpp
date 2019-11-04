/*
����Ҫ��ʵ��һ������ѧ���ɼ�������ȼ�����ͳ�Ʋ����������ļ򵥺�����

�����ӿڶ��壺
int set_grade( struct student *p, int n );
����p��ָ��ѧ����Ϣ�Ľṹ�������ָ�룬�ýṹ��Ķ���Ϊ��

struct student{
	int num;
	char name[20];
	int score;
	char grade;
};

n������Ԫ�ظ�����ѧ��num������name�ͳɼ�score�����Ѿ��洢�õġ�
set_grade������Ҫ����ѧ���ĳɼ�score������ȼ�grade��
�ȼ����ã�85��100ΪA��70��84ΪB��60��69ΪC��0��59ΪD��
ͬʱ��set_grade����Ҫ���ز������������

*/
#include <stdio.h>
#define MAXN 10

struct student {
	int num;
	char name[20];
	int score;
	char grade;
};
/*
n������Ԫ�ظ�����ѧ��num������name�ͳɼ�score�����Ѿ��洢�õġ�
set_grade������Ҫ����ѧ���ĳɼ�score������ȼ�grade��
�ȼ����ã�85��100ΪA��70��84ΪB��60��69ΪC��0��59ΪD��
ͬʱ��set_grade����Ҫ���ز������������
*/
int set_grade(struct student *p, int n) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (p->score >= 85) {
			p->grade = 'A';
		}
		else if (p->score >= 70) {
			p->grade = 'B';
		}
		else if (p->score >= 60) {
			p->grade = 'C';
		}
		else {
			p->grade = 'D';
			count++;
		}
		p++;
	}
	return count;
}
int main() {
	struct student stu[MAXN], *ptr;
	int n, i, count;

	ptr = stu;
	scanf("%d\n", &n);
	for (i = 0; i < n; i++) {
		scanf("%d%s%d", &stu[i].num, stu[i].name, &stu[i].score);
	}
	count = set_grade(ptr, n);
	printf("The count for failed (<60): %d\n", count);
	printf("The grades:\n");
	for (i = 0; i < n; i++)
		printf("%d %s %c\n", stu[i].num, stu[i].name, stu[i].grade);
	return 0;
}