// Exam Analysis Program

#include <stdio.h>

int main( void ) 
{

  // initialize variables with definitions
  unsigned int passes = 0; // # of passes
  unsigned int failures = 0; // # of fails
  unsigned int student = 1; // student counter
  int result; // one exam result

  // process 10 students using counter-controlled loop
  while ( student <= 10 ) {

    //prompt user for input and obtain value
    printf( "%s", "Enter result ( 1=passed, 2=failed ): " );
    scanf( "%d", &result );

    // if result is 1 increment passes
    if ( result == 1 ) {
      passes = passes + 1;
    }
    else { //otherwise increment failed
      failures = failures + 1;
    }

    student = student + 1; // increment student counter
  } // end while

  // termination phase
  printf( "Passed %u\n", passes );
  printf( "Failed %u\n", failures );

  // if more than 8 passed print Bonus to teacher
  if ( passes > 8 ) {
    puts( "Bonus to the Professor!" );
  }
} // end function main


