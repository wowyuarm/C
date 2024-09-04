#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0;
	for (printf("Enter a number which is smaller than 10:"); a != 3;)
		scanf("%d", &a);
	printf("Congratulation!");
	return 0;
}