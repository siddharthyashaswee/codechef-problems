#include<stdio.h>
 
int main()
{
	long i,j;
	int a[200001];
	long long revenue=0,n;
	int diff;
	scanf("%li",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		for(j=0;j<i;j++)
		{
			diff=a[i]-a[j];
			if(diff<0)
			diff=diff*(-1);
			revenue=revenue+diff;
		//	printf("%d %d\n",a[j],a[i]);
		}
	}
	printf("%lld\n",revenue);
	return 0;
}  
