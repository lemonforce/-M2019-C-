#include <stdio.h>
#define MAXN 10

int main() {
	int a[MAXN] = { 0 };
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", a + i);
	}
	int tmp = 0;
	for (int i = 0; i < n/2; i++) {
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
	printf("%d", a[0]);
	for (int i = 1; i < n; i++) {
		printf(" %d", a[i]);
	}
	return 0;
}