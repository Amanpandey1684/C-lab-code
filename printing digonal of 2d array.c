//print digonal of 2d array

#include<stdio.h>
void main()
{
	int i,j,m,n,k,l;
	printf("enter row value=");
	scanf("%d",&m);
	printf("enter colo value=");
	scanf("%d",&n);
	int x[m][n];
	for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
		scanf("%d",&x[i][j]);
	
	}
}
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
		printf("%d\t",x[i][j]);
	}
	printf("\n");
}
for(k=0;k<n;k++)
{
	for(l=k;l<m;l++)
	{
		printf("%d\t",x[k][l]);
		break;
	}
	printf("\n");
}
}
