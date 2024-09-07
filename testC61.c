#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int hang, note, HANG, NOTE;

	printf("输入打印行数与字符数量:");
	scanf("%d %d", &hang, &note);
	for (HANG = 1; HANG <= hang; HANG++)
	{
		for (NOTE = 1; NOTE <= note; NOTE++)
			printf("*");
		printf("\n");
	}
	return 0;
}