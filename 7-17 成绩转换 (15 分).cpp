/*
����Ҫ���д����һ���ٷ��Ƴɼ�ת��Ϊ����Ƴɼ���ת������

���ڵ���90��ΪA��
С��90�Ҵ��ڵ���80ΪB��
С��80�Ҵ��ڵ���70ΪC��
С��70�Ҵ��ڵ���60ΪD��
С��60ΪE��
*/

#include <stdio.h>

int main() {
	int score = 0;
	scanf("%d", &score);
	char degree[] = "EEEEEEDCBAA";
	printf("%c", degree[score / 10]);
	return 0;
}