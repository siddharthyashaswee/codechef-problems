#include<iostream>
using namespace std;

int binary(int q,int ,int);

int arr[100],n;

int main()
{
	int n;
	int q;
	
	cin>>n;
	//cout<<n;
	
	int i;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	cin>>q;
	
	int start=0,end =n-1,pos=0;
//	cout<<start<<" "<<end;
	pos=binary(q,start,end);
	cout<<pos;	
}

int binary(int q,int start,int end)
{
	int mid;
	int temp;
	mid=(start+end)/2;
//	cout<<mid<<endl;
	if(start>=end)
	return -1;
	
	if(arr[mid]==q)
	return mid+1;
	
	else if(arr[mid]>q)
	temp=binary(q,start,mid-1);
	
	else if(arr[mid]<q)
	temp=binary(q,mid+1,end);
	
}
