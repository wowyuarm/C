#include <stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int x = 0;
	while (x < 10)
	{
		printf("%d\n", arr[x]);
		x++;
	}
	return 0;
}