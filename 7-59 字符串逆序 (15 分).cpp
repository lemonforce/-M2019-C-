#include <stdio.h>
#include <string.h>
#define MAXN 85

int main() {
	char s[MAXN] = "";
	gets_s(s);
	int len = 0;
	len = strlen(s);
	for (int i = 0; i < len/2; i++) {
		char t;
		t = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = t;
	}
	puts(s);
	return 0;
}