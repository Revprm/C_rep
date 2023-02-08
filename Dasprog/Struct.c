#include <stdio.h>

typedef struct Struct
{
    int id;
    char nama[30];
    float percent;
}mhs;

int main(){
    int n = 5;
    mhs data[n];
    for (int i = 0; i < n; i++)
    {
        data[i].id= i+1;
        scanf("%s", data[i].nama);
        scanf("%f", &data[i].percent);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Records: %d\n", i+1);
        printf("Id: %d\n", data[i].id);
        printf("Name: %s\n", data[i].nama);
        printf("Percentage: %.1f\n\n", data[i].percent);
    }
    
    
    return 0;
}