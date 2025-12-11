#include <stdio.h>

int main() {
  int i;
  
  for (i = 0; i < 10; i++) {
    if (i == 4) {
      break; //The break statement can also be used to jump out of a loop.
    }
    printf("%d\n", i);
  }
   
  return 0;
}