#include <stdio.h>

int main(){
    int N;
    int ttl = 0;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++){
        for (int j = 1; j <= i; j++){
            printf("%d", ttl); ttl++;
            if (ttl == 10) ttl = 0;
        }
        printf("\n");
    }
    return 0;
}