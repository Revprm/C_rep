#include <stdio.h>

struct BinarySearch
{
    int num, idx;
};
void sort(struct BinarySearch arr[], int i, int j);
void merge(struct BinarySearch Arr[], int x, int y, int z);
int main()
{
    int N, Q;
    scanf("%d", &N);
    struct BinarySearch Dub[N];
    int b;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &Dub[i].num);
        Dub[i].idx = i;
    }
    sort(Dub, 0, N - 1);
    scanf("%d", &Q);
    while (Q--)
    {
        scanf("%d", &b);
        int x = -1;
        int y = N - 1;
        while (y - x > 1){
        int bruh = (y + x) / 2;
        if (Dub[bruh].num < b) x = bruh;
        else y = bruh;
        }
        if (Dub[y].num == b) printf("%d\n", Dub[y].idx);
        else printf("-1\n");
    }
    return 0;
}

void sort(struct BinarySearch arr[], int i, int j)
{
    if (i != j){
    int k = (i + j) / 2;
    sort(arr, i, k);
    sort(arr, k + 1, j);
    merge(arr, i, k, j);
    }
}
void merge(struct BinarySearch Arr[], int x, int y, int z)
{
    struct BinarySearch temp1[y - x + 1];
    struct BinarySearch temp2[z - y];
    for (int i = 0; i < y - x + 1; i++) temp1[i] = Arr[x + i];
    for (int i = 0; i < z - y; i++) temp2[i] = Arr[y + 1 + i];
    
    int p = 0, q = 0;
    for (int i = x; i <= z; i++){
        if (p < y - x + 1 && q < z - y){
            if (temp1[p].num < temp2[q].num){
                Arr[i] = temp1[p];
                p++;
            }
            else if (temp1[p].num > temp2[q].num){
                Arr[i] = temp2[q];
                q++;
            }
            else{
                if (temp1[p].idx <= temp2[q].idx){
                    Arr[i] = temp1[p];
                    p++;
                }
                else{
                    Arr[i] = temp2[q];
                    q++;
                }
            }
        }
        else if (p < y - x + 1){
            Arr[i] = temp1[p];
            p++;
        }
        else{
            Arr[i] = temp2[q];
            q++;
        }
    }
}