#include<stdio.h>
void StrangeMerge(int A[],int m,int B[],int n,int C[]);

int main()
{
	int i;
	int a[10],m=5,b[10],n=5,c[100];
	
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<5;i++)
	scanf("%d",&b[i]);
	
	StrangeMerge(a,m,b,n,c);
	
	
}

void StrangeMerge(int A[],int m,int B[],int n,int C[]) {
    // A has m elements, B has n elements
    int i = 0, j = 0, k = 0; 
 
    while (k < m+n) {
      if (i == m) {j++; k++;}  
      if (j == n) {C[k] = A[i]; i++; k++;} 

      if (i != m and j != n) {
        if (A[i] < B[j]) {C[k] = A[i]; i++; k++;}
        if (A[i] == B[j]) {i++; j++;}
        if (A[i] > B[j]) {j++;}
      }
    }
    for(i=0;i<k;i++)
	printf("%d ",C[i]);
  }
