/*
������һ���а��ո�ʽ��yyyy/mm/dd����������/��/�ա����������ڡ�
ע�⣺������б������Ǹ�������ܱ�4���������ܱ�100������
�����ܱ�400�����������2����29�졣
*/

#include <stdio.h>

bool isLeap(int year) {
	if ((year % 4 == 0 && year % 100 != 0)|| year % 400 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main() {
	int year = 0, month = 0, day = 0;
	int feb = 28;
	scanf("%d/%d/%d", &year, &month, &day);
	if (month > 2 && isLeap(year))
	{
		feb++;
	}
	int dayth = 0;
	switch (month)
	{
	case 12:
		dayth += 30;
	case 11:
		dayth += 31;
	case 10:
		dayth += 30;
	case 9:
		dayth += 31;
	case 8:
		dayth += 31;
	case 7:
		dayth += 30;
	case 6:
		dayth += 31;
	case 5:
		dayth += 30;
	case 4:
		dayth += 31;
	case 3:
		dayth += feb;
	case 2:
		dayth += 31;
	case 1:
		dayth += day;
	default:
		break;
	}
	printf("%d\n", dayth);
	return 0;
}