#include <stdio.h>

int main() {
    int i;

    for (i = 0; i < 10; i++) {
        printf("Hidup jokowi: %d\n", i);
    }

    return 0;
}

/*
Statement 1 sets a variable before the loop starts: int i = 0
Statement 2 defines the condition for the loop to run: i < 5. If the condition is true, the loop will start over again, 
if it is false, the loop will end.
Statement 3 increases a value each time the code block in the loop has been executed: i++
*/