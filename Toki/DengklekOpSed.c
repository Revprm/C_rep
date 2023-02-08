#include <stdio.h>

int main(){
    unsigned int M, N;
    unsigned int jum, krg, kali, bagi, mod;
    scanf("%d %d", &M, &N);

    jum = M + N;
    krg = M - N;
    kali = M*N;
    bagi = M/N;
    mod = M%N;
    printf("%d\n%d\n%d\n%d\n%d", jum, krg, kali, bagi, mod);
    return 0;
}