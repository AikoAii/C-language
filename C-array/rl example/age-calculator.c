#include <stdio.h>

int main(){
    // list umur
    int umur[] = {17, 16, 16, 15, 17, 17, 18, 19, 18, 18, 17, 16, 15, 14, 17, 18, 17, 16, 16};

    float rataRata, sum = 0;
    int i;

    // panjang data
    int panjang = sizeof(umur) / sizeof(umur[0]);

    //looping
    for (i = 0; i < panjang; i++) {
        sum += umur[i];
    }

    //hitung rata-rata
    rataRata = sum / panjang;

    //print hasil
    printf("rata-rata umur: %2.f", rataRata);

    return 0;

}