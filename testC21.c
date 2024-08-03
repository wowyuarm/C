#include <stdio.h>
void happy(void);
int main()
{
	happy(), happy(), happy();
	printf("\n");
	happy(), happy();
	printf("\n");
	happy();

	return 0;
}
void happy(void)
{
	printf("Smile!");
}