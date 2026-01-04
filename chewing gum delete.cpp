#include<stdio.h>
 
int main()
{
	long i,j;
	long long a[100001];
	long long count=0,n,k;
	int sum;
	scanf("%lli%lli",&n,&k);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			sum=a[i]+a[j];
			if(sum<k)
			count++;
		}
		sum=0;
	}
	printf("%lld\n",count);
	return 0;
}  
