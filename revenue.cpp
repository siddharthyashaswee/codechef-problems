#include<stdio.h>
 
int main()
{
	long i,j;
	int a[200001];
	long long revenue=0,n;
	int diff;
	scanf("%li",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			diff=a[i]-a[j];
			if(diff<0)
			diff=diff*(-1);
			revenue=revenue+diff;
		}
	}
	printf("%lld\n",revenue);
	return 0;
} 
