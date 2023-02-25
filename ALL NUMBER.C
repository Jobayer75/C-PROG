#include<stdio.h>
int main()
{
 int num1,num2,sum,sub,mod,mult;
 float div;
 printf("enter any two numbers:");
 scanf("%d%d",&num1,&num2);
 sum=num1+num2;
 sub=num1-num2;
 mult=num1*num2;
 mod=num1%num2;
 div=(float)num1/num2;
 printf("sum = %d\n",sum);
 printf("sub = %d\n",sub);
 printf("mult = %d\n",mult);
printf("mod = %d\n",mod);
printf("div = %.2f\n",div);
return 0;

}
