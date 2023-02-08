#include <stdio.h>
#include <math.h>

int main(){
    unsigned long int A, B, C, D;
    unsigned long int X, Y;
    scanf("%lld %lld\n%lld %lld", &A, &B, &C, &D);
    A *= pow(10, 14);
    C *= pow(10, 14);
    X = A / B;
    Y = C / D;
    if (X < Y) printf("lebih kecil");
    else if (X == Y) printf("sama");
    else if (X > Y) printf("lebih besar");
    return 0;
}