#include<iostream>
using namespace std;

void merge();

int a[100],l[100],r[100],n;

int main()
{	
	cout<<"enter no of elements:";
	cin>>n;
	
	int i;
	for(i=0;i<n;i++)
	{
		cin>>l[i];
	}
	
	for(i=0;i<n;i++)
	{
		cin>>r[i];
	}
	
	merge();
	
	for(i=0;i<2*n;i++)
	{
		cout<<a[i]<<" ";
	}	
}

void merge()
{
	int i=0,j=0,k=0;
	while(i<n && j<n)
	{
		if(l[i]<=r[j])
		{
			a[k]=l[i];
			i++;
	//		cout<<i<<endl;
		}
		else
		{
			a[k]=r[j];
			j++;
		}
		k++;
	}
	//cout<<i<<endl;
	if(i<n)
	{
		while(i!=n)
		{
			a[k]=l[i];
			i++,k++;
		}
	}
	if(j<n)
	{
		while(j!=n)
		{
			a[k]=r[j];
			j++,k++;
		}
	}
}








