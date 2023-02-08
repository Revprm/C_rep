#include <stdio.h>
void conv(unsigned long int n){
    if (n != 0){
        unsigned long int m = n / 2;
        int mod = n % 2;
        conv(m);
        printf("%d", mod);
    }   
}
int main(){
    unsigned long int num;
    scanf("%lld", &num);
    conv(num);
}