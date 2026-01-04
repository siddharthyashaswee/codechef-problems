#include<stdio.h>
#include<string.h>

int main()
{
	char temp[10],string[10];
	int t,n,caught,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		printf("%d\n",n);
		for(i=0;i<n;i++)
		{
			caught=0;
			scanf("%s",temp);
			if(n==1&&strcmp(temp,"cookie")==0)
			{
				caught=1;
				goto label;
			}
			
			if(i==0)
			{
				strcpy(string,temp);
				continue;
			}
	
			if(strcmp(string,"cookie")==0&&strcmp(temp,"cookie")==0)
			{
				caught=1;
			}
			strcpy(string,temp);
		}
		label:
		if(caught==1)
		printf("NO\n");
		else 
		printf("YES\n");
	}
}
