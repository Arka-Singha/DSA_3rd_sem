#include<stdio.h>
#include<time.h>

int main() {
  struct tm value;
 
  
  value.tm_sec=13;
  value.tm_min=12;
  value.tm_hour=9;
  value.tm_mday=10;
  value.tm_mon=0;
  value.tm_year=100;
  value.tm_wday=0;
  value.tm_yday=5;
   
  printf("Time and date: %s", asctime(&value));
  return 0;
}