#include<stdio.h>

int main()
{
	int i;
	int n;
	int temp;
	int ans;
	int count;
	int t;
	scanf("%d",&t);
	
	while(t--){
		ans=-1;
		count=0;
	scanf("%d",&n);
	for(i=0;i<n*n;i++)
	{
		scanf("%d",&temp);
		if(temp==1)
		count++;
	}
	
	int copy=n-1;
	int band=1;
	while(copy!=0)
	{
		if(count<=n)
		{
			ans=0;
			break;
		}
		else
		{
			if(count<=2*copy-1)
			{
				ans=band;
				break;
			}
			copy--;
			band++;
		}
	}
	if(ans<0)
	ans=band;
	printf("%d\n",ans);
	}
}
