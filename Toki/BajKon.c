#include <stdio.h>

int main(){
    int B, P, L;
    scanf("%d %d %d", &B, &P, &L);
    if (B <= 10 && P <= 40 && L <= 90) printf("S");
    else if (B <= 14 && P <= 60 && L <= 120) printf("M");
    else if (B <= 18 && P <= 80 && L <= 180) printf("L");
    else printf("X");
    return 0;
}