#include <stdio.h>
#define N 100

void readHutan(int hutan[][N], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &hutan[i][j]);
    }
  }
}

int main() {
  int n; 
  int hutan[N][N]; 
  int i, j; 
  int count = 0; 

  scanf("%d", &n);
  readHutan(hutan, n);

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      if (hutan[i][j] == 1) {
        count++;
      }
    }
  }
  printf("%d\n", count);

  return 0;
}