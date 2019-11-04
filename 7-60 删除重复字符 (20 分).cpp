#include <stdio.h>
#include <string.h>
#define MAXN 85

int main() {
	char s[MAXN] = "";
	gets_s(s);
	int len = 0;
	len = strlen(s);
	char norepeat[MAXN] = "";
	int cnt = 0;

	for (int i = 0; i < len; i++) {
		int tag = 0;
		for (int j = 0; j < cnt; j++) {
			if (s[i] == norepeat[j]) {
				tag = 1;
				break;
			}
		}
		if (!tag) {
			norepeat[cnt] = s[i];
			cnt++;
		}
	}
	len = strlen(norepeat);
	for (int i = 0; i < len - 1; i++) {
		for (int j = i + 1; j < len; j++) {
			if (norepeat[i] > norepeat[j]) {
				char t;
				t = norepeat[i];
				norepeat[i] = norepeat[j];
				norepeat[j] = t;
			}
		}
	}
	puts(norepeat);
	return 0;
}