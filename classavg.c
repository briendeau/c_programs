// the Class Average program with counter-controlled iteration.
#include <stdio.h>

//function main begins program exe
int main( void )
{
  unsigned int counter; // number of grade to be entered next
  int grade; // grade value
  int total; // sum of grades entered by user
  int average; // average of grades

  // intialize loop counter
  total = 0; // initialize total
  counter = 1; // initialize loop counter

  // processing phase
  while ( counter <= 10 ) {
  printf( "%s", "Enter grade: " ); // prompt for input
  scanf( "%d", &grade ); // read grade from user
  total = total + grade; // add grade to total
  counter = counter + 1; // increment counter
} // end while

  // termination phase
  average = total / 10; // integer division

  printf( "Class average is %d\n", average ); // display result
} // end function main


