#include<stdio.h>

int main()
{
	long a[100001];
	long i,j,n;
	scanf("%li",&n);
	
//		for(i=0;i<n;i++)
	//printf("%li",a[i]);
	long diff=2000000005,test;
	
	for(i=0;i<n;i++)
	{
		scanf("%li",&a[i]);
		//printf("%li\n",i);
		if(i==0) continue;
		for(j=i;j<n;j++)
		{
			if(diff==0)
			break;
			//printf("%li %li\n",a[i],a[j]);
			test=a[i-1]-a[j];
			if(test<0)
			test=test*(-1);
			//printf("\n\n%li\n",test);
			if(test<diff)
			diff=test;
		}
	}
		printf("%li\n",diff);
	return 0;
}
	
