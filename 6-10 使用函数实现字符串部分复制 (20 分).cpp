/*
����Ҫ���д�������������ַ���t�дӵ�m���ַ���ʼ��ȫ���ַ����Ƶ��ַ���s�С�

�����ӿڶ��壺
void strmcpy( char *t, int m, char *s );
����strmcpy�������ַ���char *t�дӵ�m���ַ���ʼ��ȫ���ַ����Ƶ��ַ���char *s�С�
��m���������ַ����ĳ��ȣ������ַ���ӦΪ�մ���

����������
7
happy new year
���������
new year

*/
#include <stdio.h>
#define MAXN 20

//����strmcpy�������ַ���char *t�дӵ�m���ַ���ʼ��ȫ���ַ����Ƶ��ַ���char *s�С�
//��m���������ַ����ĳ��ȣ������ַ���ӦΪ�մ���
void strmcpy(char *t, int m, char *s) {
	int lenT = 0;
	int i = 0;
	while (t[i] != '\0') {
		i++;
	}
	lenT = i;
	if (lenT < m) {
		s[0] = '\0';
		return;
	}
	else {
		i = m - 1;
		int j = 0;
		while (t[i] != '\0') {
			s[j] = t[i];
			j++;
			i++;
		}
		return;
	}
}