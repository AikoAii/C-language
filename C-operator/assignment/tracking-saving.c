#include <stdio.h>

int main() {
    int tabungan = 100.000;
    int kopi = 4.000;

    tabungan+= 10.000; //menabung
    printf("tabungan: %d\n", tabungan);

    tabungan-=kopi; // beli kopi
    printf("tabungan: %d", tabungan);

    return 0;
}