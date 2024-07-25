#include <stdio.h>
int main()
{
	int num = 0;
	while (num < 58094194)
	{
		printf("wait:%d", num);
		num = num + 1;
	}
	if (num == 58094194)
	{
		printf("This is my QQ num");
	}
	return 0;
}