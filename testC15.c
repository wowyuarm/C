#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char password[12] = { 0 };
	printf("请输入密码：");
	scanf("%s", password);
	printf("请确认密码（Y/N）:");

	int i = 0;
	while ((i = getchar()) != '\n')
	{
		continue;
	}

	int ch = getchar();
	if ('Y' == ch)
	{
		printf("确认成功");
	}
	else
	{
		printf("确认失败");
	}

	return 0;
}