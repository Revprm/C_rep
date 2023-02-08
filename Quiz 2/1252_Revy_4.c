#include <stdio.h>

void simulasi(int N) {
  int i = 1;
  int hitungan = 1;

  while (hitungan <= N) {
    printf("%d ", hitungan);
    hitungan += i;
    i++;
  }

  printf("\n");
}

int main() {
  int N;
  scanf("%d", &N);

  int sebelumnya = -1;

  while (N > 0) {
    if (N < sebelumnya) {
      break;
    }

    simulasi(N);
    sebelumnya = N;
    scanf("%d", &N);
  }

  return 0;
}
