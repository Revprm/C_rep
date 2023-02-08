#include <stdio.h>

int main(){
    int arr[10001];
    int n = 0;
    while (scanf("%d", &arr[n]) != EOF) n++;
    for (int i = n - 1; i >= 0; i--) printf("%d\n", arr[i]);
    return 0;
}