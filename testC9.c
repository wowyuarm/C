#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int num = 0;
	printf("1 for rich or 0 for poor\n");
	printf("please make your choice\n");
	scanf("%d", &num);

	if (num == 1)
		printf("You are the millionaire");
	else
		printf("You are the millionaire of the future");

	return 0;
}