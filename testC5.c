﻿#include <stdio.h>
int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	printf("请输入两个数字:>");
	scanf("%d %d", &num1, &num2);
	sum = num1 + num2;
	printf("sum=%d\n", sum);
	return 0;
}