#include<stdio.h>
int main()
{
 int number=1;
 printf("number         square         cube\n");
 while(number>=1&&number<=5)
 {
 	
printf("%d               %d              %d\n",number,number*number,number*number*number);
 number++;
 }
 return 0;
}
