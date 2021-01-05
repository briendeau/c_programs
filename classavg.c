// the Class Average program with counter-controlled iteration.
#include <stdio.h>

//function main begins program exe
int main( void )
{
  unsigned int counter; // number of grade to be entered next
  int grade; // grade value
  int total; // sum of grades entered by user

  float average; // number with decimal point for avg

  // intialize loop counter
  total = 0; // initialize total
  counter = 0; // initialize loop counter

  // processing phase
  // get first grade from user
  printf( "%s", "Enter grade, -1 to end: " ); // prompt input 
  scanf( "%d", &grade ); // read grade from user

  // loop while sentinel value not read from user
  while ( grade != -1 ) {
    total = total + grade; // add grade to total
    counter = counter + 1; // increment counter

  // get next grade from user
    printf( "%s", "Enter grade, -1 to end: " ); // prompt for input
    scanf( "%d", &grade ); // read next grade
  } // end while

  //termination phase
  // if user entered at least one grade
  if ( counter != 0 ) {
  
  // calculate average of all grades entered
    average = ( float ) total / counter; // avoid truncation
   
   // display average with two digits of precision
    printf( "Class average is %.2f\n", average );
 } // end if 
 else { // if no grades were input, output message
  puts( "No grades were entered!" );
  } // end else
} // end function main


