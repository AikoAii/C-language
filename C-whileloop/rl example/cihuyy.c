#include <stdio.h>

int main() {
  int dice = 1;
  
  while (dice <= 6) {
    if (dice < 6) {
      printf("No Cihuyy\n");
    } else {
      printf("Cihuyy!\n");
    }
    dice = dice + 1;
  }

  return 0;
}