#include <stdio.h>

int main() {
	int n = 0;
	scanf("%d", &n);
	int a = 0;
	if (n > 0)
	{
		a = 1;
	}
	else if (n < 0)
	{
		a = -1;
	}
	printf("sign(%d) = %d\n", n, a);
	return 0;
}