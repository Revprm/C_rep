#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int hasil = 0;

struct AM
{
    int id;
    char username[300];
    char password[300];
};

void Cetak(int i, struct AM Bruh[1001])
{
    for (int a = 1; a <= i; a++)
    {
        printf("%d\n", Bruh[i].id);
        printf("%s\n", Bruh[i].username);
        printf("%s\n", Bruh[i].password);
    }
}

int main()
{
    int n, q, temp, activity;
    scanf("%d %d", &n, &q);
    int log[n];
    int var[n + 1];
    struct AM user[n];

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &user[i].id);
        scanf("%s", user[i].username);
        scanf("%s", user[i].password);
        log[i] = 0;
    }

    for (int j = 1; j <= q; j++)
    {
        scanf("%d %d", &temp, &activity);
        if (activity == log[temp])
        {
            var[hasil] = temp;
            hasil++;
        }
        else log[temp] = activity;
    }
    printf("%d\n", hasil);
    Cetak(n, user);
}