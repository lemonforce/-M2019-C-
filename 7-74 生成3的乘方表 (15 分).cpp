#include <stdio.h>
#include <math.h>

int main() {
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i <= n; i++) {
		int t = 0;
		t = pow(3, i);
		printf("pow(3,%d) = %d\n",i, t);
	}
	return 0;
}