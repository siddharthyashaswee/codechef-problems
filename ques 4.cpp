#include <iostream>

using namespace std;

int main()
{
	int x,y,z,max;
	cin>>x>>y>>z;
	max=max3(x,y,z);
	cout<<max;
}

int max3(int x, int y, int z) {
  if(x >= y) 
    {

		if(x>=z)
		return x;

	}
	 
	else if(y >= z) {
    return y;
  	} 
  return z;
}

