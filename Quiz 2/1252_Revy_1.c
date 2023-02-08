#include <stdio.h>

void multi(int Arr[], int n){
    int hu = 1;
    for (int i = 0; i < n; i++){
        hu = hu*Arr[i];
    }
    printf("%d", hu);
}

int main(){
    int N;
    int hsl = 0;
    int p;
    scanf("%d", &N);
    int arr[10001];
    for (int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    multi(arr, N);

    return 0;
}