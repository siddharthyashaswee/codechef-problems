#include<stdio.h>
void mergeSort(int l, int r);
void merge(int l, int m, int r);

int day[100001];
int fine[100001];
int solution[100001];
int n;

int main()
{	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&day[i],&fine[i]);
		solution[i]=i+1;
	}
	mergeSort(0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d",solution[i]);
	}
} 

void merge(int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
 
    /* create temp arrays */
    int dayl[n1],finel[n1],dayr[n2],finer[n2];
 
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
	{
        dayl[i] = day[l + i];
        finel[i]= fine[l+i];
    }
    for (j = 0; j < n2; j++)
    {
		dayr[j] = day[m + 1+ j];
		finer[j] = fine[m + 1+ j];
	}
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if ((finel[i]*dayr[j]) >= (finer[j]*dayl[i]))
        {
            solution[k] =i;
            i++;
        }
        else
        {
            solution[k] = j;
            j++;
        }
        k++;
    }
 
    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        solution[k] = i;
        i++;
        k++;
    }
 
    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2)
    {
        solution[k] = j;
        j++;
        k++;
    }
}
 
/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void mergeSort(int l, int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;
 
        // Sort first and second halves
        mergeSort(l, m);
        mergeSort(m+1, r);
 
        merge(l, m, r);
    }
}






