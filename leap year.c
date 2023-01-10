#include<stdio.h>
int main()
{
	int i;
	printf("Enter the year:");
	scanf("%d",&i);
	if(i%4==0)
	{
		printf("The year is a leap year");
	}
     else
     printf("The year is not the leap year");
	 
}
