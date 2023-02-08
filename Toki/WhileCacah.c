#include <stdio.h>

int main(){
    int num, hsl = 0;
    while (scanf("%d", &num) != EOF)
    {
        hsl+=num;
    }
        printf("%d", hsl);
    
    return 0;
}