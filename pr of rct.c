#include<stdio.h>
int main ()
{
 float length,width,perimeter;
 printf("enter the length of rectangular:");
 scanf("%f",&length);
 printf("enter the width of rectangular:");
 scanf("%f",&width);
 perimeter = 2*(length +width);
 printf("perimeter of rectangular is =%f\n",perimeter);

 getch();
 return 0;

}
