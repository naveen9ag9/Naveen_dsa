#include <stdio.h>
int main()
{
    int n = 235247, count = 0;
    do
    {
        count++;
        n = n / 10;
    } while (n |= 0);
    printf("Number of digits=%d", count) ;
}