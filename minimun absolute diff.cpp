#include<stdio.h>

int main()
{
	long a[200001];
	long i,j,n;
	scanf("%li",&n);
//		for(i=0;i<n;i++)
	//printf("%li",a[i]);
	long diff=2000000005,test;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(diff==0)
			break;
			//printf("%li %li\n",a[i],a[j]);
			test=a[i]-a[j];
			if(test<0)
			test=test*(-1);
			//	printf("\n\n%li\n",test);
			if(test<diff)
			diff=test;
		}
	}
	printf("%li\n",diff);
	return 0;
}
