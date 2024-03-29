/*
本题要求实现一个根据学生成绩设置其等级，并统计不及格人数的简单函数。

函数接口定义：
int set_grade( struct student *p, int n );
其中p是指向学生信息的结构体数组的指针，该结构体的定义为：

struct student{
	int num;
	char name[20];
	int score;
	char grade;
};

n是数组元素个数。学号num、姓名name和成绩score均是已经存储好的。
set_grade函数需要根据学生的成绩score设置其等级grade。
等级设置：85－100为A，70－84为B，60－69为C，0－59为D。
同时，set_grade还需要返回不及格的人数。

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
n是数组元素个数。学号num、姓名name和成绩score均是已经存储好的。
set_grade函数需要根据学生的成绩score设置其等级grade。
等级设置：85－100为A，70－84为B，60－69为C，0－59为D。
同时，set_grade还需要返回不及格的人数。
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