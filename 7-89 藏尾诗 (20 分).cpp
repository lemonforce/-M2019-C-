#include <stdio.h>
#include <string.h>
int main() {
	char str[10] = "";
	int k = 0;
	for (int i = 0; i < 4; i++) {
		char s[25] = "";
		scanf("%s", s);
		int len = strlen(s);
		str[k++] = s[len - 2];
		str[k++] = s[len - 1];
	}
	printf("%s\n", str);
	return 0;
}