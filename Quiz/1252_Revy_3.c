#include <stdio.h>
#include <math.h>

int banyak_potongan(int N) {
    int p = ceil(log2(N));
    int q = N / pow(2, p); 

    if (q == 1){
        return p;
    } 
    else{
        return p;
    }
}

int main() {
  int t;
  scanf("%d", &t); 

  while (t--) {
    int N;
    scanf("%d", &N); 

    printf("%d\n", banyak_potongan(N));
  }
  return 0;
}
