#include <stdio.h>
int main()
{
     int nums[10];
	 float average,sum=0.0;
	 int i, n;
     printf("Enter n: ");
     scanf("%d", &n);
     for(i=0; i<n; ++i)
     {
          printf("Enter number %d:",i+1);
          scanf("%d", &nums[i]);
          sum += nums[i];
     }
     average = sum/n;

     printf("Average num = %.2f", average);

     return 0;
}
