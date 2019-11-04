/*
一个采购员去银行兑换一张y元f分的支票，
结果出纳员错给了f元y分。
采购员用去了n分之后才发觉有错，
于是清点了余额尚有2y元2f分，问该支票面额是多少？
*/

#include <stdio.h>

int main() {
	int f = 0, y = 0, n = 0;
	int tag = 0;
	scanf("%d", &n);
	for (int i = 0; i < 50; i++) {
		for (int j = 0; j < 99; j++) {
			if (100 * j + i - n == 200 * i + 2 * j) {
				y = i;
				f = j;
				tag = 1;
				break;
			}
		}
	}
	if (tag) {
		printf("%d.%d\n", y, f);
	}
	else {
		printf("No Solution");
	}
	return 0;
}