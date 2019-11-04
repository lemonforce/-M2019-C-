#include <stdio.h>
#define MAXN 15

int main() {
	int a[MAXN] = { 0 };
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", a + i);
	}
	int maxt = 0;
	for (int i = 1; i < n; i++) {
		if (a[maxt] < a[i]) {
			maxt = i;
		}
	}
	printf("%d %d", a[maxt], maxt);
	return 0;
}