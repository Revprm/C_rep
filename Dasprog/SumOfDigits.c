#include <stdio.h>

int Sum(int N)
{
    if (N == 0) return 0;
    return (N % 10) + Sum(N / 10);
}

int main()
{
    int N;
    scanf("%d", &N);
    printf("%d",Sum(N));
}