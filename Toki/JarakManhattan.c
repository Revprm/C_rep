#include <stdio.h>
#include <math.h>

int main(){
    int X1, X2, Y1, Y2;
    int selX;
    int selY;
    int total;
    scanf("%d %d %d %d", &X1, &Y1, &X2, &Y2); 

    selX = fabs(X1-X2);
    selY = fabs(Y1-Y2);
    total = selX + selY;
    printf("%d", total);

    return 0;
}