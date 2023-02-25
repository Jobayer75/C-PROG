#include<stdio.h>
int main ()
{
 float length,width,area;
 printf("enter the length of area:");
 scanf("%f",&length);
 printf("enter the width of area:");
 scanf("%f",&width);
 area = length*width;
 printf("the area is %.3f\n",area);
 return 0; 
}
