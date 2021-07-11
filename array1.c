//initalize elements of array to zeros

#include <stdio.h>
#include <stddef.h>
int main(void)
{
  int n[5]; // n is an array of 5 ints

  // set elements of array n to 0
  for (size_t i = 0; i < 5; ++i) {
    n[i] = 0; // set element at location i to 0
  }

  printf("%s%13s\n", "Element", "Value");

  //ouutput conents of array n in tabular format
  for (size_t i = 0; i < 5; ++i) {
    printf("%7zu%13d\n", i, n[i]);
  }
}


