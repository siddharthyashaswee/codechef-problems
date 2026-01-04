#include<stdio.h>

int main()
{
	int t;
	int n;
	int time;
	long int case1=0;
	long int case2=0;
	
	scanf("%d",&n);
	int i;
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&time);
		if(i%2==0)
		{
			case1=case1+time;
		}
		else
		case2=case2+time;
	//	printf("%li\n",case1);
	//	printf("%li\n",case2);
		
	}
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&time);
		if(i%2!=0)
		{
			case1=case1+time;
		}
		else
		case2=case2+time;
	}
	
	if(case1<=case2)
	printf("%li\n",case1);
	else 
	printf("%li\n",case2);
	return 0;
	
}
