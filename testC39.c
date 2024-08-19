#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	float num = 0;

	printf("Enter a floating-point value:");
	scanf("%f", &num);
	printf("fixed-point notation:%.6f\n", num);
	printf("exponential notation:%e\n", num);
	printf("p notation:%a\n", num);

	return 0;
}