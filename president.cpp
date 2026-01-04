#include<stdio.h>

int main()
{
	int t;
	long o1,o2;
	//scanf("%d",&t);
	//while(t--)
	{

	scanf("%li%li",&o1,&o2);

	int test;
	long count0,count1;
	long i,j;
	long dis0=0,dis1=0;
	for(i=0;i<o1;i++)
	{
		count0=0;
		count1=0;
		for(j=0;j<o2;j++)
		{
			scanf("%d",&test);
			if(test==0) count0++;
			else count1++;
		}
		printf("%li %li\n",count0,count1);
		if(count0>count1)
		dis0++;
		else dis1++;
	}
	if(dis0>dis1)
	printf("%d\n",0);
	else printf("%d\n",1);}
}




