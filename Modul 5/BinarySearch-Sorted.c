#include <stdio.h>

int find(int p, int q, int r, int arr[])
{
    while (r - q > 1)
    {
        int bruh = (r+q)/2;
        if (arr[bruh] < p ) q = bruh;
        else r = bruh;
    }
    if (arr[r] == p) printf("%d\n", r);
    else printf("-1\n");    
}

int main()
{
    int N, Q;
    scanf("%d", &N);
    int a[N], b;
    for (int i = 0; i < N; i++){
        scanf("%d", &a[i]);
    }
    scanf("%d", &Q);
    while (Q--){
        scanf("%d", &b);
        int x = -1;
        int y = N - 1;
        find(b, x, y, a);
    }
    return 0;
}