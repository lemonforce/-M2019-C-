/*

����Ҫ��ʵ��һ��������������L���Ľ׳˺͡�����Ĭ�����н���ֵ�Ǹ�������Ŀ��֤�����int��Χ�ڡ�

�����ӿڶ��壺
int FactorialSum( List L );
���е�����List�Ķ������£�

typedef struct Node *PtrToNode;
struct Node {
	int Data; //�洢������� 
PtrToNode Next;  //ָ����һ������ָ�� 
};
typedef PtrToNode List; // ���嵥�������� 

����������
3
5 3 6
���������
846

*/
#include <stdio.h>
#include <stdlib.h>

typedef struct Node *PtrToNode;
struct Node {
	int Data; /* �洢������� */
	PtrToNode Next; /* ָ����һ������ָ�� */
};
typedef PtrToNode List; /* ���嵥�������� */

int FactorialSum(List L);

int main() {
	int N, i;
	List L, p;

	scanf("%d", &N);
	L = NULL;
	for (i = 0; i < N; i++) {
		p = (List)malloc(sizeof(struct Node));
		scanf("%d", &p->Data);
		p->Next = L;  L = p;
	}
	printf("%d\n", FactorialSum(L));

	return 0;
}

//������L���Ľ׳˺�
//����Ĭ�����н���ֵ�Ǹ�������Ŀ��֤�����int��Χ��
int FactorialSum(List L) {
	long mut = 1;
	long sum = 0;
	while (L != NULL) {
		for (int i = 1; i <= L->Data; i++) {
			mut *= i;
		}
		L = L->Next;
		sum += mut;
		mut = 1;
	}
	
	return sum;
}