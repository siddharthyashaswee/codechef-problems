#include<stdio.h>
void quicksort(int start,int end);
int partition(int start,int end);
void swap(long *a,long *b);

long a[5001];
	
int main()
{
	int i,j;
	int n;
	scanf("%d",&n);	
	for(i=0;i<n;i++)
	{
		scanf("%li",&a[i]);
	}
	quicksort(0,n-1);
		for(i=0;i<n;i++)
	{
		printf("%li ",a[i]);
	}
	printf("\n");
	int count_test=n;
	long long max_revenue=0,test=0;
	for(i=0;i<n;i++)
	{
		test=a[i]*count_test;
		printf("%lli\n",test);
		if(test>max_revenue){
		max_revenue=test;}
		count_test--;
		printf("%lli\n",max_revenue);
	}
	printf("%lli\n",max_revenue);
	return 0;
}

void quicksort(int start,int end)
{
	int pindex;
	if(start>=end)return;
	pindex =partition(start,end);
	quicksort(start,pindex-1);
	quicksort(pindex+1,end);
}

int partition(int start,int end)
{
	int i,p=start;
	int pivot=end;
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

void swap(long int *a,long int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}	
