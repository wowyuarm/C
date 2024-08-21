#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#define PRAISE "Have a nice day!"
int main()
{
	char name[100];

	printf("What's your name?");
	scanf("%s", name);
	printf("Hello,%s,%s\n", name, PRAISE);
	printf("Your name of %zd letters occupies %zd memory cells.\n",
		strlen(name), sizeof(name));
	printf("The phrase of praise has %zd letters ", strlen(PRAISE));
	printf("and occpies % zd memory cells.\n", sizeof(PRAISE));

	return 0;
}