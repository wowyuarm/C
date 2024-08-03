#include <stdio.h>
void one_three(void);
void two(void);
int main()
{
	printf("starting now:\n");
	one_three();

	return 0;
}
void one_three(void)
{
	printf("one\n");
	two();
	printf("three\ndone!");
}
void two(void)
{
	printf("two\n");
}