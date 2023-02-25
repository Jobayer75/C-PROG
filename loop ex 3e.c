#include<stdio.h>
int main()
{
 int x=4;
 while(x<10)
 {
 if(x<5)
    x=x+1;
 else
    x=x+2;
 }
  printf("%d\n",x);

 return 0;
}
