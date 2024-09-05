#include <stdio.h>
#define CHAR 26
int main()
{
	const int ROW = 26;
	int chars, row;

	for (row = 0; row < ROW; row++)
	{
		for (chars = ('Z' - row); chars > ('Z' - CHAR); chars--)
			printf("%c", chars);
		printf("\n");
	}
	return 0;
}