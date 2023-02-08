#include <stdio.h>

int banyak_digit(int bilangan) {
    int jumlah_digit = 0;
    while (bilangan > 0){
        bilangan /= 10;
        jumlah_digit++;
    }
    return jumlah_digit;
}

int main(){
    int bilangan;
    scanf("%d", &bilangan);

    int sebelumnya = -1;

    while (bilangan > 0){
        if (bilangan < sebelumnya) break;
        
        printf("%d\n", banyak_digit(bilangan));
        sebelumnya = bilangan;
        scanf("%d", &bilangan);
    }
    return 0;
}
