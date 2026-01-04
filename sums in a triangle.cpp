#include<stdio.h>

int main()
{
	int a[100][100];
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		scanf("%d",&a[i][j]);
	}
/*	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		printf("%d ",a[i][j]);
		printf("\n");
	}*/
	j=0;
	int sum=a[0][0];
	for(i=1;i<n;i++)
	{
		if(a[i][j]>a[i][j+1])
		sum=sum+a[i][j];
		else
		{
			sum=sum+a[i][j+1];
			j++;
		}
		
	}	
	printf("%d",sum);
	
}
