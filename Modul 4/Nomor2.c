#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct mahasiswa
{
    char name[100];
    int math, sci, ind, eng;
};

int main()
{
    int N;
    scanf("%d", &N);
    struct mahasiswa mhs1[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%s", &mhs1[i].name);
        scanf("%d %d %d %d", &mhs1[i].math, &mhs1[i].sci, &mhs1[i].ind, &mhs1[i].eng);
    }

    int M;
    char find[100];
    scanf("%d", &M);
    while (M--)
    {
        scanf("%s", find);
        bool huagh = false;
        for (int j = 0; j < N; j++)
        {
            if (strcmp(mhs1[j].name, find) == 0)
            {
                printf("Nilai %s\n", mhs1[j].name);
                printf("Matematika : %d\nIPA : %d\nBahasa Indonesia : %d\nBahasa Inggris : %d\n", mhs1[j].math, mhs1[j].sci, mhs1[j].ind, mhs1[j].eng);
                huagh = true;
            }
        }
        if (huagh == false) printf("Nilai %s tidak ditemukan\n", find);
    }
}