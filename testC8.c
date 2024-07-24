#include <stdio.h>
int main()
{

	{
		printf("%c\n", '\'');
	}
	{
		printf("%c\n", "\"");
	}
	{
		printf("\a\n");
	}
	{
		printf("c:\\testC8\\testC8.c\n");
	}

	{
		printf("%c", '\110');
		printf("%c", '\105');
		printf("%c", '\114');
		printf("%c", '\114');
		printf("%c\n", '\117');  //输出HELLO
	}

	return 0;
}