#include <stdio.h>

int prima_ke_n(int n){
    int batas = 100000;
    int prima[batas + 1];
    for (int i = 0; i <= batas; i++){
        prima[i] = 1;
    }
    for (int i = 2; i <= batas; i++){
        if (prima[i] == 1){
            for (int j = 2 * i; j <= batas; j += i){
                prima[j] = 0;
            }
        }
    }
    int count = 0;
    for (int i = 2; i <= batas; i++){
        if (prima[i] == 1){
            count++;
            if (count == n){
                return i;
            }
        }
    }
}

int main(){
    int n;
    while (scanf("%d", &n) != EOF){
        printf("%d\n", prima_ke_n(n));
    }
    return 0;
}