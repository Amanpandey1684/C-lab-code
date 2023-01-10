#include<stdio.h>
int main()
{
	int n,i;
	printf("enter array size=");
	scanf("%d",&n);
	int x[n];
	for(i=0;i<=n-1;i++)
	{
		printf("enter values=");
		scanf("%d",&x[i]);
		printf("values=%d\n",x[i]);
	}
}
