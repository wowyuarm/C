//近代最简单的税收方案
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define GROUND 0.15
#define OVER 0.28
int main()
{
	int start;
	int ch; //单身，户主，已婚共有，已婚离异
	long tax = 0;
	long revenue = 0;

	printf("确认目前个人情况（输入数字以对应）:\n");
	printf("1.单身\n2.户主\n3.已婚共有\n4.已婚离异\n");
	scanf("%d", &ch);
	if (ch == 1)
		ch = 1;
	else if (ch == 2)
		ch = 2;
	else if (ch == 3)
		ch = 3;
	else if (ch == 4)
		ch = 4;
	else
		printf("请重新输入\n");

	printf("输入1以开始循环计算(q终止):");
	while (scanf("%d", &start) == 1)
	{
		printf("输入收入:");
		scanf("%ld", &revenue);
		switch (ch)
		{
		case 1:
			tax = GROUND * 17850 + OVER * (revenue - 17850);
			printf("您的应纳税收入为%ld\n", tax);
			break;
		case 2:
			tax = GROUND * 23900 + OVER * (revenue - 23900);
			printf("您的应纳税收入为%ld\n", tax);
			break;
		case 3:
			tax = GROUND * 29750 + OVER * (revenue - 29750);
			printf("您的应纳税收入为%ld\n", tax);
			break;
		case 4:
			tax = GROUND * 14875 + OVER * (revenue - 14875);
			printf("您的应纳税收入为%ld\n", tax);
			break;
		default:
			printf("请重新进行");
		}
		if (tax < 0)
			printf("您无需纳税");
	}
	return 0;
}