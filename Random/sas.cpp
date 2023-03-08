#include <cstdio>
using namespace std;
int main(){
    int t;
    scanf("%d", &t);
    while (t--){
        int n;
        scanf("%d", &n);
        double ans=0.0;
        double inv=0.0;
        int tap[n];
        for (int i=0;i<n;i++){
            scanf("%d", &tap[i]);
            inv+=(1.0/(double)tap[i]);
        }
        ans=1.0/inv;
        printf("%0.6lf\n\n", ans);
    }
}