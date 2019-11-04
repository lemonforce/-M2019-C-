/*
模拟交通警察的雷达测速仪。
输入汽车速度，如果速度超出60 mph，
则显示“Speeding”，否则显示“OK”。
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