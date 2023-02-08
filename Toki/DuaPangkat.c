#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    while (n % 2 == 0)n /= 2;
    if (n == 1) printf("ya\n");
    else printf("bukan\n");
}