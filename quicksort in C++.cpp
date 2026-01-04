#include<iostream>
using namespace std;

int partiton(int start,int end);
void quicksort(int start,int end);

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
	
	quicksort(0,n-1);
	
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}	
}

int partiton(int start,int end)
{
	int i,pindex=start,pivot=end,temp;
//	cout<<a[pivot]<<endl;
//	cout<<a[pindex]<<endl;
	for(i=start;i<end;i++)
	{
		//cout<<a[i];
		if(a[i]<a[pivot])
		{
			temp=a[pindex];
			a[pindex]=a[i];
			a[i]=temp;
			pindex++;
		//	cout<<" "<<a[i]<<endl;
		}
	//	cout<<a[i]<<endl;
	}
	temp=a[pivot];
	a[pivot]=a[pindex];
	a[pindex]=temp;
//	cout<<a[pivot]<<endl;
//	cout<<a[pindex]<<endl;
	return pindex;
}

void quicksort(int start,int end)
{
	int p;
	
	if(start>=end)
	return;
	
	p=partiton(start,end);
	
	quicksort(start,p-1);
	quicksort(p+1,end);
	
	
	
}








	
