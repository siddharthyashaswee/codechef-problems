#include<stdio.h>
#include<string.h>

int main()
{
	char str[100010],temp;
	int i=0,j=0;
	int n;
	int n1,n2;
	int t;
	scanf("%d",&t);
	while(t--){
	scanf("%s",str);
	n=strlen(str);
	//for(i=0;i<strlen(str);i++)
	//{
	//	printf("%c",str[i]);
	//}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			n1=str[j];
			n2=str[j+1];
			if(n1>n2)
			{
				temp=str[j];
				str[j]=str[j+1];
				str[j+1]=temp;
			}
		}
	}
	
	//for(i=0;i<strlen(str);i++)
	//printf("%c",str[i]);
	printf("%s\n",str);
}}
