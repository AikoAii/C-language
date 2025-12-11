#include <stdio.h>

int main() {
  int myNumbers[] = {25, 50, 75, 100};
  int length = sizeof(myNumbers) / sizeof(myNumbers[0]); // use sizeof formula
  int i;

  for (i = 0; i < length; i++) {
    printf("%d\n", myNumbers[i]);
  }
  
  return 0;
}

// note: Always use the sizeof formula when looping through arrays. It makes your loops adapt to the array size automatically.