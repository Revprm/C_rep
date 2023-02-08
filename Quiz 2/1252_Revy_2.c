#include <stdio.h>

int hitung(int jml, int N){
    int orang = 1;
    int hitungan = 0;

    while (hitungan < N){
        hitungan++;

        if (hitungan == N){
        return orang;
        }

        orang++;
        if (orang > jml){
        orang = 1;
        }
    }
}

int main(){
    int jml, N;

    for (int i = 0; i < 5; i++){
        scanf("%d %d", &jml, &N);
        printf("%d\n", hitung(jml, N));
    }
}