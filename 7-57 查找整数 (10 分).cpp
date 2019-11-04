#include <stdio.h>
#define MAXN 25

int main() {
	int a[MAXN] = { 0 };
	int n = 0, x = 0;
	scanf("%d%d", &n, &x);
	for (int i = 0; i < n; i++) {
		scanf("%d", a + i);
	}
	int tag = 0;
	int t = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] ==x) {
			tag = 1;
			t = i;
			break;
		}
	}
	if (tag) {
		printf("%d\n", t);
	}
	else {
		printf("Not Found\n");
	}
	return 0;
}