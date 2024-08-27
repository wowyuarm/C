#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define SEC_PER_MIN 60
int main()
{
	int sec = 0;
	printf("Enter the number of second:");
	scanf("%d", &sec);
	if (sec <= SEC_PER_MIN)
	{
		printf("It's %dsecond!", sec);
	}
	else
	{
		printf("%dminute %dsecond!", sec / SEC_PER_MIN, sec % SEC_PER_MIN);
	}
	return 0;
}