/*
����Ҫ���д�������������ַ�����ǰ3���ַ��Ƶ����

�����ӿڶ��壺
void Shift( char s[] );
����char s[]���û�������ַ�������Ŀ��֤�䳤�Ȳ�С��3������Shift�뽫����Ҫ��任����ַ�����Ȼ����s[]�

����������
abcdef
���������
defabc

*/

#include <stdio.h>
#include <string.h>

#define MAXS 10

void Shift(char s[]) {
	char chs[3];
	int i = 0;
	//�ݴ�
	for (i = 0; i < 3; i++) {
		chs[i] = s[i];
	}
	i = 0;
	//�ƶ�
	while (s[i + 3] != '\0') {
		s[i] = s[i + 3];
		i++;
	}
	//����
	int j = 0;
	while (s[i] != '\0') {
		s[i] = chs[j];
		j++;
		i++;
	}
}