#include<stdio.h>

int main()
{
	int i,j;
	int a[5];
	for(i=0;i<5;i++){
	scanf("%d",&a[i]);}
	for(i=0;i<4;i++)
	{
		for(j=i;j<4;j++)
		{
			printf("%d %d\n",a[i],a[j+1]);
		}
	}
	
}
