// Using if statements, equality operators && relational operators
#include <stdio.h>

// funtion main begins program execution
int main( void )
{
  printf( "Enter two integers, and I will tell you\n" );
  printf( "the relationships they satisfy: " );

  int num1; // first number to be read from user
  int num2; // second number to be read from user

  scanf( "%d %d", &num1, &num2 ); // read two integers

  if ( num1 == num2 ) {
    printf( "%d is equal to %d\n", num1, num2 );
  } // end if statement
  if ( num1 != num2 ) {
    printf ("%d is not equal to %d\n", num1, num2 );
  } // end if statement
  if ( num1 < num2 ) {
    printf( "%d is less than %d\n", num1, num2 );
  } // end if statement
  if ( num1 > num2 ) {
    printf( "%d is greater than %d\n", num1, num2 );
  } // end if statement
  if ( num1 <= num2 ) {
    printf( "%d is less than or equal to %d\n", num1, num2 );
  } // end if statement
  if ( num1 >= num2 ) {
    printf( "%d is greater than or equal to %d\n", num1, num2 );
  }// end if statement
}

