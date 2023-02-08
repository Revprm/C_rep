#include <stdio.h>

int hitung_jumlah(int N, int M){
	int c;
	if (N % M == 0) return N;
	if (N == M + 1) return N*M;
	for (c = N + 1; c % N != 0 || c % M != 0; c++);
	return c;
}

int main(){
    int n, m;
    while (1){
        scanf("%d %d", &n, &m);
        if (n == 0 && m == 0) break;
		if (n > m){
        	printf("%d\n", (hitung_jumlah(n, m)/n) + (hitung_jumlah(n, m)/m));
		}
		else{
			printf("%d\n", (hitung_jumlah(m, n)/n) + (hitung_jumlah(m, n)/m));
		}
    }
    return 0;
}