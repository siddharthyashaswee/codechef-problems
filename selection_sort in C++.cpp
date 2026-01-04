#include<iostream>
using namespace std;



int main()
{	
	int a[100],n;
	cin>>n;
	
	int i,j;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	int min,temp;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
			
		}
	//	printf("min=%d\n",min);
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}	
}


