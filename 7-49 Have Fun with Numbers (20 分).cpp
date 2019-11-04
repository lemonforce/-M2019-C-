/*
Notice that the number 123456789 is a 9-digit number 
consisting exactly the numbers from 1 to 9, with no duplication. 
Double it we will obtain 246913578, which happens to be another 
9-digit number consisting exactly the numbers from 1 to 9, 
only in a different permutation. Check to see the result if we double it again!

Now you are suppose to check if there are more 
numbers with this property. That is, double a 
given number with k digits, you are to tell if the 
resulting number consists of only a permutation of the digits in the original number.
*/

#include <stdio.h>

int getEachDigit(char *s,int a[]) {
	int i = 0;
	int t = 0;
	while (s[i] != '\0') {
		t = s[i] - '0';
		a[t]++;
		i++;
	}
	return i;
}

int main() {
	char s[25] = "";
	int a[10] = { 0 };
	scanf("%s", s);
	int len = 0;
	len = getEachDigit(s, a);
	char sdouble[25] = "";
	int tag = 0;
	int i = len-1;
	int t = 0;
	while (i >= 0) {
		t = (s[i] - '0')*2 + tag;
		if (t > 9) {
			t -= 10;
			tag = 1;
		}
		else {
			tag = 0;
		}
		sdouble[i] = t + '0';
		i--;
	}
	sdouble[len] = '\0';
	if (tag) {
		printf("No\n");
		printf("1%s\n", sdouble);
		return 0;
	}
	int b[10] = { 0 };
	getEachDigit(sdouble, b);
	int wrong = 0;
	for (int i = 0; i < 10; i++) {
		if (a[i] != b[i]) {
			wrong = 1;
			break;
		}
	}
	if (wrong) {
		printf("No\n");
	}
	else {
		printf("Yes\n");
	}
	printf("%s\n", sdouble);
	return 0;
}