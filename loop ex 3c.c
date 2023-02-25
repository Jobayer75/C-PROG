#include<stdio.h>
int main()
{
 int x=3;
 while(x<10)
 {
  printf("%d\n",++x);
  if(x==6)
  break;
 }
 return 0;
}
