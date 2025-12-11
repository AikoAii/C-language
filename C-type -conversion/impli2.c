#include <stdio.h>

int main() {
  /*
  As another example, if you divide two integers: 5 by 2, you know that the sum is 2.5. 
  And as you know from the beginning of this page, if you store the sum as an integer, the result will only display the number 2. 
  Therefore, it would be better to store the sum as a float or a double
  */
  float sum = 5 / 2;

  printf("%f", sum);  // 2.000000
  return 0;
}