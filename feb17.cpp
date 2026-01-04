#include<stdio.h>
void quicksort(int start,int end);
int partition(int start,int end);
void swap(int *a,int *b);
int check(int n);

int a[100];

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	int start=0;
	int end=n-1;
	
	quicksort(start,end);
//		for(i=0;i<n;i++)
//	printf("%d ",a[i]);
	int x;
	x=check(n);	
	printf("%d\n",x);
	}


}

int check(int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if((a[i+1]!=a[i]+1)&&i!=n-1)
		return a[i];	
		else if(a[i+1]!=a[i]&&i==n-1)
		return a[i+1];
	}
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

void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
