// Car-pool savings calculator
// display user's cost per day for driving to work
// using integers only
#include <stdio.h>

int main( void ) {

int miles;
printf( "How many miles per day do you drive? (use integers for all answers) \n" );
scanf( "%d", &miles );

int c_p_g;
printf( "How much is the cost per gallon of gasoline?\n" );
scanf( "%d", &c_p_g );

int m_p_g;
printf( "How many miles per gallon does your vehicle get?\n" );
scanf( "%d", &m_p_g );

int parkfee;
printf( "What are your parking fees?\n" );
scanf( "%d", &parkfee );

int tolls;
printf( "Cost of daily tolls?\n" );
scanf( "%d", &tolls );

int drivetotal = ( miles / m_p_g * c_p_g + parkfee + tolls );
// calculates gallons used per day then finds the costs of everything

printf( "Your total savings for not driving today are $%d ", drivetotal );
}



