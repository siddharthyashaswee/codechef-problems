#include<stdio.h>
long largest(long a[],long n);
void RadixSort(long a[],long n);
long check(long a[],long n);

long largest(long a[],long n)
{
    long large = a[0], i;
    for(i = 1; i < n; i++)
    {
        if(large < a[i])
            large = a[i];
    }
    return large;
}
 
void RadixSort(long a[],long n)
{
    long bucket[10][10], bucket_count[10];
    long i, j, k, remainder, NOP=0, divisor=1, large, pass;
 
    large = largest(a, n);
    //printf("The large element %d\n",large);
    while(large > 0)
    {
        NOP++;
        large/=10;
    }
 
    for(pass = 0; pass < NOP; pass++)
    {
        for(i = 0; i < 10; i++)
        {
            bucket_count[i] = 0;
        }
        for(i = 0; i < n; i++)
        {
            remainder = (a[i] / divisor) % 10;
            bucket[remainder][bucket_count[remainder]] = a[i];
            bucket_count[remainder] += 1;
        }
 
        i = 0;
        for(k = 0; k < 10; k++)
        {
            for(j = 0; j < bucket_count[k]; j++)
            {
                a[i] = bucket[k][j];
                i++;
            }
        }
        divisor *= 10;
    }
}

long check(long a[],long n)
{
	long i;
	int t;
	scanf("%d",&t);

	for(i=0;i<n;i++)
	{
		if((a[i+1]!=a[i]+1)&&i!=n-2)
		return a[i];	
		else if(a[i+1]!=a[i]&&i==n-2)
		return a[i+1];
	}
}
 
int main()
{
	int t;
	long i, n, a[100001];
	scanf("%d",&t);
	
    while(t--){
    	
	scanf("%li",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%li",&a[i]);
    }
    RadixSort(a,n);

    long x;
	x=check(a,n);	
	printf("%li\n",x);
	}
    return 0;
}
