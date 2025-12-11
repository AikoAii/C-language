#include <stdio.h>

int main() {

    int peopleInRoom = 0;

    //3 orang masuk
    peopleInRoom++;
    peopleInRoom++;
    peopleInRoom++;

    printf("kondisi kamar: %d orang\n", peopleInRoom);

    //1 orang keluar
    peopleInRoom--;

    printf("kondisi kamar: %d orang", peopleInRoom);

    return 0;

}