#include<stdio.h>
void swap(int a[],int i, int j);

int day[100001];
int fine[100001];
int solution[100001];
int n;

int main()
{	int i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&day[i],&fine[i]);
		solution[i]=i+1;
	}
	
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
        if ((fine[i]*day[j]) < (fine[j]*day[i]))
        	{
        		swap(fine,i,j);
        		swap(day,i,j);
        		swap(solution,i,j);
        	
			}
		}
	//	printf("%d ",solution[i]);
    }
 
	for(i=0;i<n;i++)
	{
		printf("%d\n",solution[i]);
	}
} 

void swap(int arr[],int i, int j)
{
	int temp;
	temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}
