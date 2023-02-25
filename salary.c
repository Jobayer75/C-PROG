#include<stdio.h>
int main ()
{
 int NUMBER=10;
 float salary;
 double amount=5.50;
 int hours=100;
 scanf("%d%d%lf",&NUMBER,&hours,&amount);
 salary=(amount*hours);
 printf("NUMBER=%dsalary=U$%.2f\n",NUMBER,salary);
 return 0;

}
