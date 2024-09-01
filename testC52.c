#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	int a, b;

	printf("Enter a number:");
	scanf("%d", &a);
	b = a + 10;
	while (a++ < b)
		printf("%d\n", a);
	return 0;
}