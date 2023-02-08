#include<stdio.h>

void sort(int arr[], int i, int j);
void mergeSort(int Arr[], int x, int y, int z);
void WorldSeed(int level[], int n, long long seed, int multiplier, int max_diff){
	int i;
	for(i = 0; i < n; i++){
		seed = seed * multiplier % max_diff + 1;
		multiplier = (multiplier + seed) % max_diff + 1;
		level[i] = seed;
	}
}

int main(){
	int n, i, multiplier, max_diff;
	long long seed;
	scanf("%d%lld%d%d", &n, &seed, &multiplier, &max_diff);
	int level[n];
	WorldSeed(level, n, seed, multiplier, max_diff);
	sort(level, 0, n - 1);
    int a = 1;
    int temp[100001];
    for (int i = 0; i < n + multiplier; i++)
    {   
        if (level[i] + level[i + 1] == level[i + 2])
        {
            continue;
            a--;
        }
        if (level[i] == multiplier || level[i] == multiplier + seed)
        {
            continue;
            a--;
        }
        temp[i] = level[i];
        if (i == 4)
        {
            break;
        }
        a++;
        if (a > multiplier )
        {
            a--;
        }
        
    }
    printf("Banyak Level : %d\n", a);
    for (int i = 0; i < n + multiplier; i++)
    {
        if (temp[i] != 0) printf("%d\n", temp[i]);
    }
    
	
	return 0;
}

void sort(int arr[], int i, int j){
    
    if (i != j){
    int k = (i + j) / 2;
    sort(arr, i, k);
    sort(arr, k + 1, j);
    mergeSort(arr, i, k, j);
    }
}
void mergeSort(int Arr[], int x, int y, int z)
{
    int temp1[y - x + 1];
    int temp2[z - y];
    for (int i = 0; i < y - x + 1; i++) temp1[i] = Arr[x + i];
    for (int i = 0; i < z - y; i++) temp2[i] = Arr[y + 1 + i];

    int p = 0, q = 0;
    for (int i = x; i <= z; i++){
        if (p < y - x + 1 && q < z - y){
            if (temp1[p] < temp2[q]){
                Arr[i] = temp1[p];
                p++;
            }
            else if (temp1[p] > temp2[q]){
                Arr[i] = temp2[q];
                q++;
            }
            else{
                if (temp1[p] <= temp2[q]){
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