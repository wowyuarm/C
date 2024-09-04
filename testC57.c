//特殊等比数列求和 S=1+1/2+1/4+1/8……
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int xiang;//项数
	double sum, power_of_2;
	int limit;

	printf("请输入项数：");
	scanf("%d", &limit);
	for (xiang = 1, sum = 0, power_of_2 = 1; xiang <= limit; xiang++, power_of_2 *= 2.0)
	{
		sum += 1.0 / power_of_2;
		printf("%d项的和为:%lf\n", xiang, sum);
	}
	return 0;
}