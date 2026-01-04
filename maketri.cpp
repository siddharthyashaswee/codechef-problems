#include<stdio.h>
void quicksort(int start,int end);
void swap(int *a,int *b);
void combination(int a[],int n,int x);
int partition(int start,int end);
int check(int a,int b, int c);

int a[100];

int main()
{
	int n;
	printf("no of array elements:");
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	int start=0;
	int end=n-1;
	
	quicksort(start,end);
	int x;
	printf("enter x:");
	scanf("%d",&x);
	combination(a,n,x);
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

void combination(int a[],int n,int x)
{
	int i,j;
	int no;
	int count;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++){
		no=check(a[i],a[j],x);
		count=count+no;}
	}
	printf("%d",count);
}

int check(int a,int b, int c)
{
	if((a+b)>c&&(b+c)>a&&(c+a)>b)
	return 1;
	else return 0;
}









