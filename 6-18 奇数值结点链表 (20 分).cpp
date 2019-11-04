/*
本题要求实现两个函数，分别将读入的数据存储为单链表、将链表中奇数值的结点重新组成一个新的链表。链表结点定义如下：

struct ListNode {
	int data;
	ListNode *next;
};
函数接口定义：
struct ListNode *readlist();
struct ListNode *getodd( struct ListNode **L );

函数readlist从标准输入读入一系列正整数，按照读入顺序建立单链表。
当读到−1时表示输入结束，函数应返回指向单链表头结点的指针。

函数getodd将单链表L中奇数值的结点分离出来，重新组成一个新的链表。
返回指向新链表头结点的指针，同时将L中存储的地址改为删除了
奇数值结点后的链表的头结点地址（所以要传入L的指针）。
*/

#include <stdio.h>
#include <stdlib.h>
typedef struct ListNode *List;

struct ListNode {
	int data;
	struct ListNode *next;
};

struct ListNode *readlist();
struct ListNode *getodd(struct ListNode **L);
void printlist(struct ListNode *L) {
	struct ListNode *p = L;
	while (p) {
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
}

int main() {
	struct ListNode *L, *Odd;
	L = readlist();
	Odd = getodd(&L);
	printlist(Odd);
	printlist(L);

	return 0;
}

struct ListNode *readlist() {
	List head;
	List rear;
	head = (List)malloc(sizeof(struct ListNode));
	head->data = 0;
	head->next = NULL;
	rear = head;
	int data = 0;
	scanf("%d", &data);
	while (data != -1) {
		List p;
		p = (List)malloc(sizeof(struct ListNode));
		p->data = data;
		p->next = NULL;
		rear->next = p;
		rear = p;
		scanf("%d", &data);
	}
	return head;

}

struct ListNode *getodd(struct ListNode **L) {
	List odd;
	odd = (List)malloc(sizeof(struct ListNode));
	odd->data = 0;
	odd->next = *L;
	List dou;
	dou = (List)malloc(sizeof(struct ListNode));
	dou->data = 0;
	dou->next = *L;
	List rear1 = odd;
	List rear2 = dou;
	*L = (*L)->next;

	List rear = *L;	//遍历原来数列
	//复制出奇数项

	while (rear) {

		//奇数
		if ((rear->data % 2) == 1) {
			List p = (List)malloc(sizeof(struct ListNode));
			p->data = rear->data;
			rear1->next = p;
			rear1 = p;
		}
		else {
			rear2->next = rear;
			rear2 = rear;
		}
		rear = rear->next;
	}
	rear1->next = NULL;
	rear2->next = NULL;
	odd = odd->next;
	*L = dou->next;
	return odd;
}