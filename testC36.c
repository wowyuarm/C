#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	float salary;

	printf("\aEnter your designed monthly salary:");
	printf(" $________\b\b\b\b\b\b\b\b");
	scanf("%f", &salary);
	printf("\n\t$%.3f a month is $%.3f a year", salary, salary * 12);
	printf("\rGee!\n");

	return 0;
}