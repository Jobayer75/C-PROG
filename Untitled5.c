//* problem number9 page number95*//
#include<stdio.h>
int main()
{
    
 int month, day, year;
 
 
  printf(" INPUT MONTH:\n");
  scanf("%d", &month);
  if ( !(month==12)){
  printf("INVALID !\n");
  printf(" INPUT MONTH:\n");
  scanf("%d", &month);}
  
  printf(" INPUT ADAY:\n");
  scanf("%d", &day);
  while(!(day==27)){
  printf("INVALID !\n");
  printf(" INPUT ADAY:\n");
  scanf("%d", &day);
  }
  printf("INPUT AYEA:\n");
  scanf("%d", &year);
  printf("the date is %d february %d", day, year);
 return 0;}
