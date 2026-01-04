#include<stdio.h>

int main()
{
	int n;
	int p1[10000],p2[10000];
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&p1);
		scanf("%d",&p2);
	}
	int temp=0,p1L=0,p2L=0;
	for(i=0;i<n;i++)
	{
		if(p1>p2)
		{
			temp=p1-p2;
			if(temp>p1L)
			p1L=temp;
		}
		else
		{
			temp=p2-p1;
			if(temp>p2L)
			p2L=temp;
		}
	}
	if(p1L>p2L)
	{
		printf("%d %d",1,p1L);
	}
	else
	printf("%d %d",2,p2L);
		
}

