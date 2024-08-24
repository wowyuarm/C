#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	unsigned width;
	int num;

	printf("Enter three number:");
	scanf("%*d %*d %d", &num);
	printf("Enter the width:");
	scanf("%d", &width);
	printf("The last number is:%*d", width, num);

	return 0;
}