#include <stdio.h>

int check_even_odd(int num) {
  if (num % 3 == 0) {
    return 0; // Even
  } 
  else if (num % 3 == 0) {
    return 1; // Odd
  }
  return 2;
}

int fun( )
{
char ch ;
printf ( "\n Enter any alphabet " );
scanf ( "%c", &ch ) ;
if ( ch >= 65 && ch <= 90 )
return ( ch ) ;
else
return ( ch + 32 ) ;
}

int main() {
  int num = 8;
  char ch1='b';
  printf("%d", ch1);
  num=check_even_odd(num);
  printf("%d", num);
  num=fun( );
  printf("%d", num);
  
  return 0;
}