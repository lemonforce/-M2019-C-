/*
ģ�⽻ͨ������״�����ǡ�
���������ٶȣ�����ٶȳ���60 mph��
����ʾ��Speeding����������ʾ��OK����
*/

#include <stdio.h>
#include <string.h>

int main() {
	int v = 0;
	scanf("%d", &v);
	char s[20] = "Speeding";
	if (v <= 60)
	{
		strcpy(s, "OK");
	}
	printf("Speed: %d - %s", v, s);
	return 0;
}