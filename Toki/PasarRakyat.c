#include <stdio.h>

int main()
{
    int N, temp, find, bruh;
    scanf("%d", &N);
    int kunj[100];
    if (N >= 2 && N <= 20){
        for (int i = 0; i < N; i++){
            scanf("%d\n", &temp);
            if (temp >= 1 && temp <= 100000) kunj[i] = temp;  
        }
    }
    temp = kunj[0];
    for (int i = 1; i < N; i++) if (kunj[i] > temp)temp = kunj[i];    
    
    bruh = temp;
    while (find != N){
        find = 0;
        for (int i = 0; i < N; i++) if (temp % kunj[i] == 0)find++;
        if (find < N) temp = temp + bruh; 
    }
    
    printf("%d", temp);
    return 0;
}