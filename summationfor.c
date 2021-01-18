#include <stdio.h>

int main( void )
{

unsigned int sum = 0; // init sum var

for (unsigned int num = 2; num <= 100; num += 2) {
  sum += num; // add number to sum
}

printf("Sum is %u\n", sum);
}




