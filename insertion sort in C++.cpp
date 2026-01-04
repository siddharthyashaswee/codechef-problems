#include<iostream>
using namespace std;

int a[100],n;

int main()
{	
	cout<<"enter no of elements:";
//	cout<<"shit";
	cin>>n;
	
	int i,j,k;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	int val;
	
	for(i=0;i<n-1;i++)
	{
		val=a[i+1];
		for(j=i;j>=0;j--)
		{
			if(val<a[j])
			{
				a[j+1]=a[j];
				a[j]=val;
			}	
		}
	}
	
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}	
}


















