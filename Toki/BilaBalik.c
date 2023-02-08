#include <stdio.h>

int main(){
    int N, num, bck, num1 = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++){
        scanf("%d", &num);
        while (num != 0){
            bck = num % 10;
            num1 = (num1 * 10) + bck;
            num/=10;
        }
        printf("%d\n", num1);
        num = 0, bck = 0, num1 = 0;
    }
    return 0;
}