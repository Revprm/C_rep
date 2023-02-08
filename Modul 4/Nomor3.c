#include <stdio.h>
void reverse(int *arr, int size);


int main()
{
    int arr[100];
    int size;
    int *left = arr;  
    int *right;

    scanf("%d", &size);

    right = &arr[size - 1];  
    while(left <= right)
    {
        scanf("%d", left++);
    }
    left = arr;

    while(left < right) 
    {
        *left    ^= *right;
        *right   ^= *left;
        *left    ^= *right;

        left++;
        right--;
    }
    reverse(arr, size);

    return 0;
}
void reverse(int *arr, int size)
{
    int *arrEnd = (arr + size - 1);

    while(arr <= arrEnd)
    {
        printf("%d ", *arr);
        arr++;
    }
}