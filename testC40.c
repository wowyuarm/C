#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	float molecule = 3.0e-23;
	float quart = 950;
	float quarts, molecules;

	printf("Enter the number of quart of water:");
	scanf("%f", &quarts);
	molecules = quarts * quart / molecule;
	printf("%f quarts of water contain %e molecules.\n", quarts, molecules);

	return 0;
}