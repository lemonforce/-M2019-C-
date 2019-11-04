/*
乌龟与兔子进行赛跑，跑场是一个矩型跑道，跑道边可以随地进行休息。
乌龟每分钟可以前进3米，兔子每分钟前进9米；兔子嫌乌龟跑得慢，
觉得肯定能跑赢乌龟，于是，每跑10分钟回头看一下乌龟，
若发现自己超过乌龟，就在路边休息，每次休息30分钟，
否则继续跑10分钟；而乌龟非常努力，一直跑，不休息。
假定乌龟与兔子在同一起点同一时刻开始起跑，
请问T分钟后乌龟和兔子谁跑得快？
*/

#include <stdio.h>
#include <string.h>

int main() {
	int tDistance = 0, rDistance = 0;
	int T = 0, t = 0, rRest = 30, rRun = 10;
	int rTag = 0;	//0表示休息，1表示跑步
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		if (t == 0) {
			if (rDistance > tDistance) {
				rTag = 0;
				t = 30;
			}
			else {
				rTag = 1;
				t = 10;
			}
		}
		tDistance += 3;
		if (rTag) {
			rDistance += 9;
			t--;
		}
		else {
			t--;
		}
	}

	char s[5];
	int distance = 0;
	if (tDistance > rDistance) {
		strcpy(s, "@_@");
		distance = tDistance;
	}
	else if (tDistance < rDistance) {
		strcpy(s, "^_^");
		distance = rDistance;
	}
	else {
		strcpy(s, "-_-");
		distance = rDistance;
	}
	printf("%s %d", s, distance);
	return 0;
}