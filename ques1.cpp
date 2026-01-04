#include<stdio.h>
int triangleType(int ,int ,int);

int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int ans;
	ans=triangleType(a,b,c);
	printf("%d",ans);
}

int triangleType(int a, int b, int c) {
  if(a != b && b != c)
    return 1;
  else if(a == b && a == c)
    return 3;
  else
    return 2;
}
