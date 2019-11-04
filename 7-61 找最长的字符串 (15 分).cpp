#include <stdio.h>
#include <string.h>

#define MAXN 1010
#define MAXLEN 85

int main() {
	char s[MAXN][MAXLEN] = { };
	int n = 0;
	scanf("%d", &n);
	int a[MAXN] = { 0 };
	for (int i = 0; i < n; i++) {
		gets_s(s[i]);
		a[i] = strlen(s[i]);
	}
	int max = 0;
	for (int i = 0; i < n; i++) {
		if (a[max]<a[i]) {
			max = i;
		}
	}
	printf("The longest is: ");
	puts(s[max]);
	return 0;
}