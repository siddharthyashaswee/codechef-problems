#include<iostream>
using namespace std;

void insertion_sort(int start,int end);
void insert(int start,int val);

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
	
	insertion_sort(0,n-1);
	
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}	
}

void insertion_sort(int start,int end)
{
	int val;
	
	if(start>=end)
	return;
	
	val=a[start+1];
	insert(start,val);
		
	insertion_sort(start+1,end);
}

void insert(int start,int val)
{
	if(val<a[start])
	{
		a[start+1]=a[start];
		a[start]=val;
	}
	insert(start-1,val);	
}












