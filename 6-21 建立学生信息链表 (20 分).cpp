/*
����Ҫ��ʵ��һ���������ѧ���ɼ���֯�ɵ�������ļ򵥺�����

�����ӿڶ��壺
void input();
�ú�������scanf�������л�ȡѧ������Ϣ����������֯�ɵ�������
���������ͷβָ�뱣����ȫ�ֱ���head��tail�С�

����Ϊ���ɸ�ѧ������Ϣ��ѧ�š��������ɼ�����������ѧ��Ϊ0ʱ������
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