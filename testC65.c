#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdbool.h>
int main(void)
{
	unsigned long num;
	unsigned long div;
	bool BOOL;

	printf("输入一个数:\n");
	printf("输入q以结束.\n");

	while (scanf("%ld", &num) == 1)
	{
		for (div = 2, BOOL = true; (div * div) <= num; div++)
		{
			if (num % div == 0)
			{
				if ((div * div) != num)
					printf("%ld的约数有%ld和%ld\n", num, div, num / div);
				else
					printf("%ld的完全平方根是%ld\n", num, div);
				BOOL = false;
			}
		}
		if (BOOL)
			printf("%ld是素数\n", num);
		printf("输入一个数:\n");
		printf("输入q以结束.\n");
	}
	return 0;
}