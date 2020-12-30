// if..else selection statement example
#include <stdio.h>

int main ( void ) {
int grade;

printf( "Please enter grade received:\n" );
scanf( "%d", &grade );

if ( grade >= 90 ) {
  puts( "A" );
} // end if
else if ( grade >= 80 ) {
  puts( "B" );
  } // end else if
else if ( grade >= 70 ) {
  puts( "C" );
} // end else if
else if ( grade >= 60 ) {
  puts( "D" );
} // end else if
else {
  puts( "F" );
} // end else
}


