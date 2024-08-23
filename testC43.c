#include <stdio.h>
#define C "123456789"
int main(void)
{
	int A = 123456789;
	float B = 0.123456;

	printf("*%010d*\n", A);
	printf("**%8.6f**\n", B);
	printf("***%-10s***", C);
	return 0;
}