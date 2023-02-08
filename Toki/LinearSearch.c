#include <stdio.h>
#include <stdbool.h>

int main(){
    int N, M;
    bool wiw = false;
    scanf("%d %d", &N, &M);
    int arr[N];
    for (int i = 0; i < N; i++){
        scanf("%d\n", &arr[i]);
    }
    for (int i = 0; i < N; i++){
        if (arr[i] == M){
            printf("%d", i);
            wiw = true;
            break;
        }
    }
    if (wiw == false) printf("-1\n");
    return 0;
}