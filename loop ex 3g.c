#include<stdio.h>
int main()
{
 int x=1;
 do
 {
  printf("%d\n",x);
  x=x+1;
 }while(x % 2==0);
 return 0;
}
