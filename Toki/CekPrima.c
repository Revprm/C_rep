#include <stdio.h>
#include <math.h>

int main()
{
    int num, hitung, n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        for (int j = 2; j <= sqrt(num); j++){ 
        hitung = num % j;
        if (hitung == 0) break;
        }
        if (hitung == 0 || num == 1) printf("BUKAN\n");
        else printf("YA\n");
        
    }

    return 0;
}