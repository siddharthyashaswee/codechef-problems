#include<iostream>
using namespace std;

void mergesort(int start,int end);
void merge(int,int start,int end);

void merge();

int a[100],n;

int main()
{	
	cout<<"enter no of elements:";
	cin>>n;
	
	int i;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	mergesort(0,n-1);
	
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}

void mergesort(int start,int end)
{
	if(start>=end)
	return;
	
	int mid=start+(end-1)/2;
	
	mergesort(start,mid);
	mergesort(mid+1,end);
	merge(start,mid,end);
}

void merge(int start,int mid,int end)
{
	int i=0,j=0,k=0;
	int n1=mid-start+1;
	int n2=end-mid;
	
	int left[n1],right[n2];

	for(i=0;i<n1;i++)
	{
		left[i]=a[start+i];
	}
	for(j=0;j<n2;j++)
	{
		right[j]=a[mid+1+j];
	}
	
	while(i<n1 && j<n2)
	{
		if(left[i]<=right[j])
		{
			a[k]=left[i];
			i++;
	//		cout<<i<<endl;
		}
		else
		{
			a[k]=right[j];
			j++;
		}
		k++;
	}
	//cout<<i<<endl;
	while(i<n1)
		{
			a[k]=left[i];
			i++,k++;
		}
	
	while(j<n2)
	
		{
			a[k]=right[j];
			j++,k++;
		}
}












