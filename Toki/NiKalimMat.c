#include <stdio.h>

int main(){
    int A, B;
    char C;
    scanf("%d %c %d", &A, &C, &B);
    if (C=='+')printf("%d", A+B);
    else if (C=='-') printf("%d", A-B);
    else if (C=='*')printf("%d", A*B);
    else if (C=='<'){
        if (A<B) printf("benar");
        else printf("salah");
    }
    else if (C=='>'){
        if (A>B)printf("benar");
        else printf("salah");
    }
    else if (C=='='){
        if (A==B)printf("benar");
        else printf("salah");
    }
    
    return 0;
}