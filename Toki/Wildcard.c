#include <stdio.h>
#include <string.h>

typedef struct Wildcard{
    char string[1001];
}Went;

int main(){
    char str[1001];
    char str2[1001];
    int count = 0;
    int i = 0, N;
    scanf("%s", str);
    scanf("%d", &N);
    Went wila[N];
    for (int j = 0; j < N; j++){
        scanf("%s", wila[j].string);
    }
    int pj = strlen(str) - 1;
    if (pj > 0){
        while (str[count] < str[pj]){
            strncat(str2[i], str[count]);
            count++;
            i++;    
        }
        int pj2 = strlen(str2) - 1;    
        for (int j = 0; j < N; j++){
            int count2 = 0;
            for (int k = 0; k < pj2; k++){
                if (strncmp(wila[j].string[k], str2[k]) == 0){
                    /* code */
                }
                
            }
            
        }
        
    }
    
    
    return 0;
}