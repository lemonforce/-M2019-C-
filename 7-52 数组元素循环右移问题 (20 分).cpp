#include <stdio.h>
#define MAXN 105

int main() {
	int a[MAXN] = { 0 };
	int n = 0, m = 0;
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	int tmp = 0;

	for (int i = 0; i < m; i++) {
		tmp = a[n - 1];
		for (int j = n-1; j > 0; j--) {
			a[j] = a[j - 1];
		}
		a[0] = tmp;
	}
	printf("%d", a[0]);
	for (int i = 1; i < n; i++) {
		printf(" %d", a[i]);
	}
	return 0;
}