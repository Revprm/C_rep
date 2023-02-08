#include <stdio.h>

int main(){
    int det, jam, menit, detik;
    scanf("%d", &det);
    jam = det/3600;
    menit = (det % 3600)/60;
    detik = (det % 3600)%60;
    printf("%d\n%d\n%d", jam, menit, detik);
    return 0;
}