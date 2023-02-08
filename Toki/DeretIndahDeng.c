#include <stdio.h>

int main(){
    int l, h, dif;
    scanf("%d %d %d", &l, &h, &dif);
    for (int i = 1; i <= h; i++){
        printf("%d\n", l);
        l+=dif;
    }
    return 0;
}