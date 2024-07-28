#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int age = 0;
	scanf("%d", &age);
	if (age < 18)
	{
		printf("未成年");
	}
	else if (age >= 18 && age < 30)
	{
		printf("青年");
	}
	else if (age >= 30 && age < 60)
	{
		printf("中年");
	}
	else
	{
		printf("老年");
	}
	return 0;
}