#include <stdio.h>

int main(){
    int N, M, fact;
    scanf("%d", &N);
    for (int i = 0; i < N; i++){
        fact = 0;
        scanf("%d", &M);
        for (int j = 2; j < M; j++){
            if (M % j == 0) fact++;
            if (fact > 2) break;
        }
        if (M == 1 || fact <= 2) printf("YA\n");
        else printf("BUKAN\n");
    }
    return 0;
}