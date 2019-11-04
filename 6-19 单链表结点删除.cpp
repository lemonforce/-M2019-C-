﻿/*
本题要求实现两个函数，分别将读入的数据存储为单链表、将链表中所有存储了某给定值的结点删除。
链表结点定义如下：

struct ListNode {
	int data;
	ListNode *next;
};

函数接口定义：
struct ListNode *readlist();

struct ListNode *deletem( struct ListNode *L, int m );

函数readlist从标准输入读入一系列正整数，按照读入顺序建立单链表。
当读到−1时表示输入结束，函数应返回指向单链表头结点的指针。

函数deletem将单链表L中所有存储了m的结点删除。返回指向结果链表头结点的指针。
*/
#include <stdio.h>
#include <stdlib.h>

struct ListNode {
	int data;
	struct ListNode *next;
};

struct ListNode *readlist();
struct ListNode *deletem(struct ListNode *L, int m);
void printlist(struct ListNode *L) {
	struct ListNode *p = L;
	while (p) {
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
}

int main() {
	int m;
	struct ListNode *L = readlist();
	printlist(L);
	scanf("%d", &m);
	L = deletem(L, m);
	printlist(L);

	return 0;
}

typedef struct ListNode *List;

/*
函数readlist从标准输入读入一系列正整数，按照读入顺序建立单链表。
当读到−1时表示输入结束，函数应返回指向单链表头结点的指针。
*/
struct ListNode *readlist() {
	List head, p, q;
	head = (List)malloc(sizeof(struct ListNode));
	head->data = 0;
	head->next = NULL;
	q = head;
	
	int data = 0;
	scanf("%d", &data);
	while (data != -1) {
		p = (List)malloc(sizeof(struct ListNode));
		p->data = data;
		p->next = NULL;

		q->next = p;
		q = p;
		scanf("%d", &data);
	}
	return head;
}

/*
函数deletem将单链表L中所有存储了m的结点删除。返回指向结果链表头结点的指针。
*/

struct ListNode *deletem(struct ListNode *L, int m) {
	List p, q;
	p = L;
	q = p->next;
	while (q) {
		if (q->data == m) {
			p->next = q->next;
			free(q);
			q = p->next;
		}
		else {
			p = p->next;
			q = q->next;
		}
	}
	return L->next;
}