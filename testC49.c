#include <stdio.h>
void pound(int n);
int main(void)
{
    int a = 5;
    char ch = 'A';
    float b = 6.0f;

    pound(a);
    pound(ch);
    pound(b);

    return 0;
}

void pound(int n)
{
    while (n-- > 0)
        printf("#");
    printf("\n");
}
