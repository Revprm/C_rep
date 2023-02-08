#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char str[101];
    char *s;

    gets(str);
    s = str;
        
    int i = 0;
    int l = strlen(str) - 1;
    
    while(l > i){
        if(*(s + i) != *(s + l)){
            printf("BUKAN\n");
            return 0;
        }   
        i++;
        l--;
    }

    printf("YA\n");
}