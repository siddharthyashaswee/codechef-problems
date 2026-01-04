#include<iostream>
using namespace std;

void selection(int start,int end);

int a[100],n;

int main()
{	
	
	cin>>n;
	
	int i,j;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	selection(0,n-1);
	
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}	
}

void selection(int start,int end)
{
	if(start>=end)
	return;
	
	int min,temp,j;
		min=start;
		
		for(j=start+1;j<n;j++)
		{
			if(a[j]<a[min]) 
				min=j;
		}
		
		temp=a[start];
		a[start]=a[min];
		a[min]=temp;
		
		selection(start+1,end);
}






