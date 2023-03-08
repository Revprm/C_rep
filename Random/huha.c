#include <stdio.h>
int main(){
    int N, awal;
    int a;
    int b;
    scanf("%d %d\n", &N, &awal);
    for (int i = 0; i < N; i++)
    {
        scanf("%d %d\n", &a, &b);
        if (a == 0){
            a = awal;
        }
        printf("%d\n",__builtin_popcount(a^b) - 1);
    }
    
    return 0;
}