#include <stdio.h>
#include <stdbool.h>
bool isPrime(int n){
    int count = 0;         
    for(int i = 2; i < n; i++)  
    {
        if(n % i == 0)
            count++;
    }
    if(count == 0) 
        return true;
    return false;
}
int main()
{
    int n, a[10000], x[10000], y[10000];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", x[i]);
        if (isPrime(x[i]))
    {
        printf("%d\n", x[i]);
    }else{
        printf("Unable to send Fever Slot Buckle.\n");
    }
    }
    
    
}