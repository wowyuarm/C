#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define d 2024;
enum mood
{
	happy,
	sorrow,
	angry
};
int a = 0;
int main()
{
	{
		int b = 0;
		int sum = 0;
		scanf("%d %d", &a, &b);
		sum = a + b;

		printf("sum=%d\n", sum);
	}
	printf("%d\n", happy);
	printf("%d\n", sorrow);
	printf("%d\n", angry);

	const c = 2024;
	int n = d;

	printf("%d\n", c);
	printf("%d\n", n);

	return 0;
}