/*
本题要求实现一个将输入的学生成绩组织成单向链表的简单函数。

函数接口定义：
void input();
该函数利用scanf从输入中获取学生的信息，并将其组织成单向链表。
单向链表的头尾指针保存在全局变量head和tail中。

输入为若干个学生的信息（学号、姓名、成绩），当输入学号为0时结束。
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stud_node {
	int    num;
	char   name[20];
	int    score;
	struct stud_node *next;
};
struct stud_node *head, *tail;

void input();

int main() {
	struct stud_node *p;

	head = tail = NULL;
	input();
	for (p = head; p != NULL; p = p->next)
		printf("%d %s %d\n", p->num, p->name, p->score);

	return 0;
}

typedef struct stud_node * List;

void input() {
	int num = 0;
	char name[20];
	int score = 0;
	scanf("%d", &num);
	while (num != 0) {
		scanf("%s %d", name, &score);
		List p = (List)malloc(sizeof(struct stud_node));
		p->num = num;
		strcpy(p->name, name);
		p->score = score;
		p->next = NULL;
		if (head == NULL) {
			head = p;
			tail = p;
		}
		else {
			tail->next = p;
			tail = p;
		}
		scanf("%d", &num);
	}
}