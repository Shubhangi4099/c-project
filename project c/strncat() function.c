#include <stdio.h>
#include <string.h>
int main( )
{
char source[ ] = " Programming" ;
char target[ ]= "Computer" ;
printf ( "\nSource string = %s", source ) ;
printf ( "\nTarget string = %s", target ) ;
strncat ( target, source, 5 ) ;
printf ( "\nTarget string after strncat( ) = %s", target ) ;
}