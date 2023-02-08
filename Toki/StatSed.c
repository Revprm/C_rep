#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int num[N], max, min;
    for (int i = 0; i < N; i++){
        scanf("%d", &num[i]);
    }
    max = min = num[0];
    for (int i = 0; i < N; i++){
        if (min > num[i]) min = num[i]; 
        if (max < num[i]) max = num[i];
        
    }
    printf("%d %d", max, min);
    return 0;
}