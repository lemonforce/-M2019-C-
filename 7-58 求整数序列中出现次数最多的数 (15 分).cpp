#include <stdio.h>
#define MAXN 1005

int main() {
	int a[MAXN] = { 0 };
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", a + i);
	}
	int t[MAXN] = { 0 };
	int many[MAXN] = { 0 };
	int cnt = 0;

	for (int i = 0; i < n; i++) {
		int fag = 0;
		for (int j = 0; j < cnt; j++) {
			if (a[i] == t[j]) {
				many[j]++;
				fag = 1;
				break;
			}
		}
		if (!fag) {
			t[cnt] = a[i];
			cnt++;
		}
	}
	int maxmany = 0;
	for (int i = 0; i < cnt; i++) {
		if (many[maxmany] < many[i]) {
			maxmany = i;
		}
	}
	printf("%d %d\n", t[maxmany],many[maxmany]+1);
	return 0;
}