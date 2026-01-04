#include<stdio.h>
void quicksort(long start,long end);
long partition(long start,long end);
void swap(long *a,long *b);
long check(long n);
 
long a[100001];
 
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
	long n;
	scanf("%li",&n);
	long i;
	for(i=0;i<n;i++)
	scanf("%li",&a[i]);
 
	long start=0;
	long end=n-1;
 
	quicksort(start,end);
//	for(i=0;i<n;i++)
//	printf("%d ",a[i]);
//	printf("\n");
	long x;
	x=check(n);	
	printf("%li\n",x);
	}
	return 0; 
 
}
 
long check(long n)
{
	long i;
	for(i=0;i<n;i++)
	{
		if((a[i+1]!=a[i]+1)&&i!=n-2)
		return a[i];	
		else if(a[i+1]!=a[i]&&i==n-2)
		return a[i+1];
	}
}
 
void quicksort(long start,long end)
{
	long pindex;
	if(start>=end)return;
	pindex =partition(start,end);
	quicksort(start,pindex-1);
	quicksort(pindex+1,end);
}
 
long partition(long start,long end)
{
	long i,p=start;
	long pivot=end;
	for(i=start;i<end;i++)
	{
		if(a[i]<a[pivot])
		{
			swap(&a[p],&a[i]);
			p++;
		}
	}swap(&a[pivot],&a[p]);
	return p;	
}
 
void swap(long *a,long *b)
{
	long temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
