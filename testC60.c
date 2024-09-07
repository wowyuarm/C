#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
double power(double n, int p);
int main()
{
	double num, np;
	int pow;
	printf("计算幂 数字与指数:");
	while (scanf("%lf %d", &num, &pow) == 2)
	{
		np = power(num, pow);
		printf("结果为:%lf\n", np);
		printf("继续/q放弃:");
	}
	return 0;
}
double power(double n, int p)
{
	double POW = 1;
	int i;
	for (i = 1; i <= p; i++)
		POW *= n;
	return POW;
}