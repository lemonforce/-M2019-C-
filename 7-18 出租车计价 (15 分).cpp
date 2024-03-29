/*
本题要求根据某城市普通出租车收费标准编写程序进行车费计算。具体标准如下：

起步里程为3公里，起步费10元；
超起步里程后10公里内，每公里2元；
超过10公里以上的部分加收50%的回空补贴费，即每公里3元；
营运过程中，因路阻及乘客要求临时停车的，按每5分钟2元计收（不足5分钟则不收费）。

输入格式:
输入在一行中给出输入行驶里程（单位为公里，精确到小数点后1位）与等待时间（整数，单位为分钟），其间以空格分隔。

输出格式:
在一行中输出乘客应支付的车费（单位为元），结果四舍五入，保留到元。

*/

#include <stdio.h>

int main() {
	double mileage = 0;
	int time = 0;
	scanf("%lf %d", &mileage, &time);
	double timemoney = time / 5 * 2;
	double money = 0;
	if (mileage <= 3.0)
	{
		money = 10.0 + timemoney;
	}
	else if(mileage <= 10.0)
	{
		money = 10.0 + (mileage - 3)*2.0 + timemoney;
	}
	else
	{
		money = 10.0 + 14.0 + (mileage - 10)*3.0 + timemoney;
	}
	printf("%d\n", (int)(money + 0.5));
	return 0;
}