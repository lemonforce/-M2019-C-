/*
�����֪Ӣ�Ƴ��ȵ�Ӣ��foot��Ӣ��inch��ֵ����ô��Ӧ������(foot+inch/12)��0.3048�����ڣ�����û����������������
��ô��ӦӢ�Ƴ��ȵ�Ӣ�ߺ�Ӣ���Ƕ����أ�������1Ӣ�ߵ���12Ӣ�硣
*/
//��Ŀ��֤������ת����Ӣ����������	��Ϊ��

#include <stdio.h>

int main() {
	int foot = 0, inch = 0;
	int centmeter = 0;
	scanf("%d", &centmeter);
	int tmpinch = 0;
	tmpinch = (int)(((double)centmeter) / 30.48 * 12.0);
	inch = tmpinch % 12;
	foot = tmpinch / 12;
	printf("%d %d", foot, inch);
	return 0;
}