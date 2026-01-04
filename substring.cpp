#include<stdio.h>

int main()
{
	int q;
	scanf("%d",&q);
	
	char ans[20]="hackerrank";
	
	char test[10001];
	while(q--)
	{
	scanf("%s",test);
	
	int i=0,j=0;
	while(test[i]!='\0')
	{
		if(test[i]==ans[j]){
		j++;
		}
		
		i++;
	}
	if(j==10)
	printf("YES");
	else 
	printf("NO");
}
}




