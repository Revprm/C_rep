#include <stdio.h>

int sudah[10001][10001];
char hii[10001][10001];
int P, Q;
int line = 0;

int cari(int x, int y){
    char numbah[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            if (sudah[x][y] == 0){   
                sudah[x][y] = 1;
                if (hii[x][y] == '.'){
                    line++;   
                }
                else if (hii[x][y] == '#')
                {
                    cari(x + 1, y);
                    cari(x, y + 1);
                    cari(x-1, y);
                    cari(x, y-1);
                }
            }
        }
        
    }
    
}

int main(){
    int N, l, o;
    scanf("%d", &N);
    while (N--)
    {
        scanf("%d", &P, &Q);
        char lab[P][Q];
        for (int i = 0; i < P; i++)
        {
            for (int j = 0; i < Q; i++){
                scanf("%c", &lab[i][j]);
                if (lab[i][j] == '.'){
                    l = i;
                    o = j;
                }
            }
        }

        cari(l, o);
        printf("Panjang tali adalah %d.\n", line);
    }
    

    return 0;
}