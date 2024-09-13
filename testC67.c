#include <stdio.h> 
int main(void)
{
    int n;
    double sumeven = 0.0;
    int ct_even = 0;
    double sumodd = 0.0;
    int ct_odd = 0;

    while (scanf("%d", &n) == 1 && n != 0)
    {
        if (n % 2 == 0)
        {
            sumeven += n;
            ++ct_even;
        }
        else
        {
            sumodd += n;
            ++ct_odd;
        }
    }