/*
一只猴子第一天摘下若干个桃子，当即吃了一半，还不过瘾，又多吃了一个；
第二天早上又将剩下的桃子吃掉一半，又多吃了一个。
以后每天早上都吃了前一天剩下的一半加一个。
到第N天早上想再吃时，见只剩下一个桃子了。
问：第一天共摘了多少个桃子？
*/

#include <stdio.h>

int main() {
	int N = 0;
	int num = 1;
	scanf("%d", &N);
	for (int i = 1; i < N; i++) {
		num = (num + 1) * 2;
	}
	printf("%d\n", num);
	return 0;
}