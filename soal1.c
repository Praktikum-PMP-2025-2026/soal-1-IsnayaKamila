// PRAKTIKUM PEMECAHAN MASALAH DENGAN PEMROGAMAN 
// MODUL    : 01
// PEMBUAT  : Isnaya Zalfa Kamila (13224028)
// DESKRIPSI: Menentukan jumlah cara turun turun tangga 

#include <stdio.h> 
#include <math.h>

void countdown(int N) { // turun anak tangga 
  if (N == 0) {  // inisiasi sudah ada di tangga terakhir 
    printf("Done!\n");
  } else {
    printf("%d\n", N);
    countdown(N - 1);   // recursive call
  }
}

int main() {
  int N;
  scanf("%d", &N);
  countdown(N);
  return 0;
}
