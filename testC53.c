#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void Temperature(double n);
int main(void)
{
	double hua = 0;

	printf("请输入一个华氏温度：");
	while (scanf("%lf", &hua) == 1)
	{
		Temperature(hua);
		printf("继续输入华氏温度/输入q结束:");
	}
	return 0;
}
void Temperature(double n)
{
	double she, kai;
	const double K = 273.16;

	she = 5.0 / 9.0 * (n - 32.0);
	kai = she + K;
	printf("摄氏温度为:%lf\n", she);
	printf("开氏温度为:%lf\n", kai);
}