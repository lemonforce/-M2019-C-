/*
����Ҫ��ʵ��һ���ַ������ҵļ򵥺�����

�����ӿڶ��壺
char *search( char *s, char *t );
����search���ַ���s�в����Ӵ�t�������Ӵ�t��s�е��׵�ַ����δ�ҵ����򷵻�NULL��

��������1��
The C Programming Language
ram
�������1��
10
��������2��
The C Programming Language
bored
�������2��
-1

*/

//���ַ���s�в����Ӵ�t�������Ӵ�t��s�е��׵�ַ����δ�ҵ����򷵻�NULL��
#include <stdio.h>
char *search(char *s, char *t) {
	int i = 0, j = 0;
	int ans = 0;
	int first = 1;
	while (s[i] != '\0') {
		while (s[i] == t[j] && t[j] != '\0') {
			if (first) {
				ans = i;
				first = 0;
			}
			i++;
			j++;
		}
		//���t[j]�����һ����������ҵ���
		if (t[j] == '\0') {
			return &s[ans];
		}
		else {
			i++;
			j = 0;
			first = 1;
		}
		
	}
	return NULL;
}