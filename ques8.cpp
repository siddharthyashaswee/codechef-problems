#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void mostFreq3(int *a, int n, int b[3])
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}
		}
		
	}
//	for(i=0; i<n; i++)
  //         cout << a[i] << " ";

	j=1;
	int test[3]={1};
	temp=a[0];
	for(i=1;i<n;i++)
	{
		if(temp==a[i])
		{
			j++;
			{
				if(j>test[2])
				{
					if(j>test[1])
					{
						if(j>test[0])
						{
							test[0]=j;
							b[0]=a[i];
						}
						test[1]=j;
						b[1]=a[i];		
					}
						test[2]=j;
						b[2]=a[i];
				}
				
			}	
		}
		else 
		{
			j=1;
			temp=a[i];
		}
	}


}

int main()
{
	int n;
	int a[100];
	int b[3];
	int i=0;

	cin >> n;
	for(i=0;i<n;i++){
		cin >> a[i];
	}

	mostFreq3(a,n,b);
        for(i=0; i<3; i++)
           cout << b[i] << " ";

	return 0;
}



