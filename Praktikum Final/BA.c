#include <stdio.h>
#include <string.h>

int main(){
    long long N, B, tj;
    int idks;
    char mail[101];
	scanf("%lld\n", &N);
	long long arr[N];
    for (long long i = 0; i < N; i++){
        scanf("%lld", &arr[i]);
    }
    scanf("%lld\n", &B);
    while (B--){
        scanf("%d", &idks);
        if (idks == 1){
            scanf("%s %lld\n", mail, &tj);
            if (strcmp(mail, "XOR") == 0){
                for (long long i = 0; i < N; i++){
                    arr[i] = arr[i] ^ tj;
                }
            }
            else if (strcmp(mail, "OR") == 0){
                for (long long i = 0; i < N; i++){
                    arr[i] = arr[i] | tj;
                }
            }
            else if (strcmp(mail, "AND") == 0){
                for (long long i = 0; i < N; i++){
                    arr[i] = arr[i] & tj;
                }
            }
        }
        if (idks == 2){
            for (long long i = 0; i < N; i++){
                printf("%lld ", arr[i]);
            }
            printf("\n");
        }
    }
    return 0;
}