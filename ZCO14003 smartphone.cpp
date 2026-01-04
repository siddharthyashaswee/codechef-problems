#include<stdio.h>

int main()
{
	int i,j,n;
	scanf("%d",&n);	
	int budget[5000],revenue[5000]={0};
	for(i=0;i<n;i++)
	{
		scanf("%d",&budget[i]);
	}
	int test;
	for(i=0;i<n;i++)
	{
		test=budget[i];
		for(j=0;j<n;j++)
		{
			if(test<=budget[j])
			revenue[i]=revenue[i]+test;
		}
	}
	int cost=0;
	for(i=0;i<n;i++)
	{
		test=revenue[i];
		for(j=0;j<n;j++)
		{
			if(test>=revenue[j]&&test>cost)
			cost=test;
		}
	}
	printf("%d",cost);
	return 0;
}
