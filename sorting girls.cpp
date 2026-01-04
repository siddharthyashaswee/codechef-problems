#include<stdio.h>
void swap(int a[],int j);
int check(int a[],int n);

int main()
{
	int n,i,j,t;
	int a[100000];
	scanf("%d",&t);
	while(t--){
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	int count=0,check_value;
	for(i=0;i<n-1;i++)
	{
		check_value=check(a,n);
		count=count+check_value;
		
		for(j=0;j<n-1;j++)
		{
			if(a[j]<a[j+1])
			{
				swap(a,j);
				j++;
			}
		}
		//for(k=0;k<n;k++)
	//	printf("%d ",a[k]);
	 //	printf("\n");	
	}
	printf("%d\n",count);}
}

void swap(int a[],int j)
{
	int temp;
	temp=a[j];
	a[j]=a[j+1];
	a[j+1]=temp; 
}

int check(int a[],int n)
{
	int i;
	for(i=0;i<n-1;i++)
	{
		if(a[i]==0&&a[i+1]==1)
		return 1;
	}
	return 0;
}
