#include<stdio.h>
#include<math.h>
int main()
{
	float x;
	scanf("%f",&x);
	float t1=1,diff,sum=1;
	int n=1;
	while(n<=100)
	{
		t1=t1*(x/n);
		//printf("%f",t2);
		sum=sum+t1;
		if(t1<0.0001)
		n=101;
		else
		n++;
	}
	printf("%f",sum);
}
