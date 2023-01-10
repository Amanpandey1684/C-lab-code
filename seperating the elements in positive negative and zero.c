#include<stdio.h>
int main()
{
	int size,i,pcount=0,zcount=0,ncount=0;
	printf("enter the no. of elements: ");
	scanf("%d",&size);
	int a[size];
	for (i=0;i<size;i++)
	{
		printf("enter the elements: ");
		scanf("%d",&a[i]);
		if (a[i]>0)
		pcount++;
		else if (a[i]<0)
		ncount++;
		else 
		zcount++;
	}
	printf("the created array is: ");
	for(i=0;i<size;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n we have %d positive no.: \n",pcount);
	printf("\n we have %d negative no.: \n",ncount);
	printf("\n we have %d zero no.: \n",zcount);
}
