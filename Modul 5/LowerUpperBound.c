#include <stdio.h>
int main(){
    int N, P, Q;
    int arr[100001];
    for (int i = 0; i < 100001; i++) arr[i] = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++){
        scanf("%d", &P);
        arr[P]++;
    }
    for (int i = 0; i < 100001; i++) arr[i] += arr[i - 1];
    scanf("%d", &Q);
    for (int i = 0; i < Q; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        if (x > 0) printf("%d\n", (arr[y] - arr[x - 1]));
        else printf("%d\n", arr[y]);
    }
    return 0;
}