/*
�����ϲ�ͬ�����в�ͬ��д���ڵ�ϰ�ߡ�����������ϰ��д�ɡ���-��-�ꡱ��
���й���ϰ��д�ɡ���-��-�ա�����������д������
�Զ��Ѷ����������ʽ�����ڸ�д���й�ϰ�ߵ����ڡ�
*/

#include <stdio.h>

int main() {
	int year = 1900;
	int month = 1;
	int day = 1;
	scanf("%d-%d-%d", &month, &day, &year);
	printf("%d-%02d-%02d", year, month, day);
	return 0;
}