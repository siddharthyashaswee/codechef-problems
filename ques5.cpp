#include<iostream>

using namespace std;

int maxConsecutive(int *a, int n, int m);

int main()
{
	int a[100],m,n,ans,i;
	
	cout<<"enter n:";
	cin>>n;
	
	cout<<"enter array:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter m:";
	cin>>m;
	ans=maxConsecutive(a,n,m);
	cout<<ans;
}

int maxConsecutive(int *a, int n, int m) {
  int sum = 0;
  for(int i = 0; i < m; i++) {
    sum += a[i];
  }
  int max = sum;
  for(int i = m; i < n; i++) {
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
	}
  return max;
}

