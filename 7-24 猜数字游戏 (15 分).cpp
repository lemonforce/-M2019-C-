/*
��������Ϸ������Ϸ���������һ��100���ڵ���������
�û�����һ����������в²⣬��Ҫ���д�����Զ���������������ı��������бȽϣ�
����ʾ���ˣ���Too big����������С�ˣ���Too small������
��ȱ�ʾ�µ��ˡ�����µ�����������򡣳���Ҫ��ͳ�ƲµĴ�����
���1�β³���������ʾ��Bingo!�������3�����ڲµ�������
����ʾ��Lucky You!�����������3�ε�����N��>3�������ڣ�������N�Σ��µ�������
����ʾ��Good Guess!�����������N�ζ�û�вµ�������ʾ��Game Over����
��������������ڵ���N��֮ǰ���û�������һ��������Ҳ�����Game Over��������������
*/

#include <stdio.h>

int main() {
	int num = 0, n = 0;
	scanf("%d %d", &num, &n);
	int ans = 0;
	int guessNum = 0;
	while (scanf("%d",&guessNum)) {
		if (guessNum < 0) {
			printf("Game Over\n");
			return 0;
		}
		ans++;
		if (num == guessNum) {
			if (ans == 1) {
				printf("Bingo!\n");
			}
			else if(ans <= 3){
				printf("Lucky You!\n");
			}
			else {
				printf("Good Guess!\n");
			}
			return 0;
		}
		else if (num < guessNum) {
			printf("Too big\n");
		}
		else {
			printf("Too small\n");
		}
		if (ans >= n) {
			printf("Game Over\n");
			return 0;
		}
	}
	return 0;
}