#include <stdio.h>

int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    for (int i = 1; i <= N; i++){
        if (i % M != 0) printf("%d", i);
        else printf("*");
        printf(" ");
    }
    return 0;
}