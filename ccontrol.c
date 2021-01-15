#include <stdio.h>

int main( void ) {
  unsigned int counter = 1; // initialization

  while (counter <= 10) { // interation condition
    printf( "%u\n", counter );
    ++counter; //increment
  }
}

