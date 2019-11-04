#include <stdio.h>

int main() {
	int a = 0, b = 0, c = 0;
	scanf("%d %d %d", &a, &b, &c);
	char max = 'C';
	if (a == c ){
		max = 'B';
	}
	else if(b == c)
	{
		max = 'A';
	}
	printf("%c", max);
	return 0;
}