#include<iostream>

using namespace std;
int has(int *a, int n, int x, int k) ;

int main()
{
	int a[100],n,x,k,ans,i;
	
	cout<<"enter n:";
	cin>>n;
	
	cout<<"enter array:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter x and k:";
	cin>>x>>k;
	ans=has(a,n,x,k);
	cout<<ans;
}

int has(int *a, int n, int x, int k) 
{
//	cout<<n<<" "<<k<<endl;
	if(k<=0 && n<0)
	return 1;
	else
	if(n<0)
	return 0;

	if(a[n-1]==x)
	return has(a,n-1,x,k-1);
	else 
	return has(a,n-1,x,k);;
	
}

