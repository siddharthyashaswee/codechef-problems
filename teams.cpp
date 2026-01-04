#include<stdio.h>

int main()
{
	int i,j;
	int a[200000];
	long long revenue=0,n;
	int diff;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);}
	for(i=0;i<(n-1);i++)
	{
		for(j=i;j<(n-1);j++)
		{
			diff=a[i]-a[j+1];
			if(diff<0)
			diff=diff*(-1);
			revenue=revenue+diff;
		}
	}
	printf("%lld",revenue);
}
