#include<stdio.h>
int main()
{
	int min,max;
	printf("enter two positive integers\n");
	scanf("%d%d",&min,&max);
	printf("natural no. between %d and %d are: \n",min,max);
	while(min<=max)
	{
		printf("%d",min);
		min++;
	}
	return 0;
}
