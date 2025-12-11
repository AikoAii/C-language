#include <stdio.h>

int main() {
  int i;
  
  for (i = 0; i < 10; i++) {
    if (i == 4) {
      continue; //The continue statement breaks one iteration (in the loop),
       // if a specified condition occurs, and continues with the next iteration in the loop.
    }
    printf("%d\n", i);
  }   
  
  return 0;
}