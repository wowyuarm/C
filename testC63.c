#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int all_days = 0;
	int hot_days = 0;
	int cold_days = 0;
	int temperature;
	float hot = 20;
	float cold = 0;

	printf("输入一定时期内的温度:\n");
	printf("输入q以终止输入");
	while (scanf("%d", &temperature) == 1)
	{
		all_days++;
		if (temperature > hot)
			hot_days++;
		if (temperature <= cold)
			cold_days++;
	}
	printf("%d天里炎热有%d天，有%d寒冷", all_days, hot_days, cold_days);

	return 0;
}