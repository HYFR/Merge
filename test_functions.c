#include <stdio.h>
#include "functions.h"
#include "assert.h"

int main() {

  printf("\n");
  //demonstrates that merge sort works on even length arrays.
  int m1[4] = {1, 4, 3, 2};
  int m2[4] = {1, 2, 3, 4};
  int length1 = 4;
  int beginning = 0;

  merge(m1, beginning, length1 - 1);
  assert(match(m1, m2) == 1);

  printf("Even length array works (merge).\n");

  //demonstrates that merge sort works on odd lengthed arrays.
  int m3[5] = {3, 5, 1, 4, 2};
  int m4[5] = {1, 2, 3, 4, 5};
  int length2 = 5;

  merge(m3, beginning, length2 - 1);
  assert(match(m3, m4) == 1);

  printf("Odd lengthed arrays work (merge).\n");

  //demonstrates that merge sort works with negative integers within the array.
  int m5[3] = {-3, -5134, -143};
  int m6[3] = {-5134, -143, -3};
  int length3 = 3;

  merge(m5, beginning, length3 - 1);
  assert(match(m5, m6) == 1);

  printf("Odd length arrays with negative integer elements work.\n");

  //demonstrates that arrays with both odd and negative integers can be sorted with the merge algorithm.
  int m7[5] = {-12, -243, 5429, 0, 1995};
  int m8[5] = {-243, -12, 0, 1995, 5429};
  int length4 = 5;

  merge(m7, beginning, length4 - 1);
  assert(match(m7, m8) == 1);

  printf("The merge sort algorithm works.\n\n");

}
