#include <cstdio>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);
        double hasil = 0.0;
        double v0 = 0.0;
        int tap[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &tap[i]);
            v0 += (1.0/(double)tap[i]);
        }
        hasil = 1.0 / v0;
        printf("%0.6f\n", hasil);
    }
}