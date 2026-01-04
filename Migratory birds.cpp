#include<stdio.h>

int main()
{
	int a[200001];
	long i,n;
	long max=0;
	int bird=0;
	long count[5]={0};
	scanf("%li",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==1)
		count[0]++;
		else if(a[i]==2)
		count[1]++;
		else if(a[i]==3)
		count[2]++;
		else if(a[i]==4)
		count[3]++;
		else if(a[i]==5)
		count[4]++;
	}
	for(i=0;i<5;i++)
	{
		if(count[i]>max)
		{
			max=count[i];
			bird=i+1;
		}
	//	printf("%li ",count[i]);
	}
	printf("%d\n",bird);
	return 0;
}
