#include<stdio.h>
int main()
{
 int x=0,a=15;
 do
 {
  x=x+2;
  a=a-1;
 }while(x<a);
 printf("%d\n",a);
 return 0;
}
