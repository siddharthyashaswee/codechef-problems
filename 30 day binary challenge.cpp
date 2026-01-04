#include<stdio.h>
int main()
{
	long n;
	int rem,count,max=0;
	scanf("%li",&n);
	//printf("%li",n);
	while(n!=0)
	{
		rem=n%2;
		if(rem==0)
		count=0;
		else 
		count++;
		if(count>max)
		max=count;
		n=n/2;
		printf("%d\n",count);
		printf("hello\n");
	}
	printf("%d\n",max);
}
