#include<stdio.h>
int main()
{
	char letter[5];
	int num[3],x;
	srand(time(NULL));

	for(x=0;x<5;x++)
	{
	letter[x]=65+rand()%26;
	printf("Random letter is :%c\n",letter[x]);
    }

	for(x=0;x<3;x++)
	{
	num[x]=0+rand()%9;//
	printf("Random number is :%d\num[x]");
   }

	printf("The generate password is ");

	for(x=0;x<5;x++){

	  printf("%c",letter[x]);
     }
	for(x=3;x<3;x++)
	{

	  printf("%d",num[x]);
}
}
