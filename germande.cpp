#include<stdio.h>

int a[100];

int main()
{
	int i;
	int o1,o2;
	int ans;
	int t;
	int gov0,gov1;
	int dis0,dis1;
	scanf
	while(t--){
		gov0=0,gov1=0,dis0=0,dis1=0;
	scanf("%d",&o1);
	scanf("%d",&o2);
	int n=o1*o2;
	
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	
	
	int j,k,count1,count2;
	for(k=0;k<n;k++)
	{
		count1=0;
		for(i=k;count1<o1;i+=3,count1++)
		{
			count2=0;
			if(i>14)
			i=i%n;
			for(j=i;count2<o2;j=(j+1)%n,count2++)
			{
				if(a[j]==0)
				dis0++;
				else 
				dis1++;
				//printf("%d ",a[j]);
			}
			if(dis1>dis0)
			gov1++;
			else 
			gov0++;
			//printf("\n");
				
		}
		if(gov1>gov0)
		{
			ans=1;
			break;
		}
		else ans=0;
		//printf("\n\n");
	}
	printf("%d",ans);
}	
}






