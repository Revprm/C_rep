#include <stdio.h>

int main(){
    int N;
    int hasil = 0;
    int num;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &num);
        hasil+=num;
    }
    printf("%d\n", hasil);

    return 0;
}