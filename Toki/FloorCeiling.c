#include <stdio.h>
#include <math.h>

int main(){
    double num;
    int alpha, beta;
    scanf("%lf", &num);
    alpha = ceil(num);
    beta = floor(num);
    printf("%d %d", beta, alpha);
}