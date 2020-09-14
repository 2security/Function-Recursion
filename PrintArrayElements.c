#include<stdio.h>
void Print(int arr[],int s,int n)
	{
		if(s>=n)
			return ;
		printf("%d ",arr[s]);
		Print(arr,s+1,n);
	}
int main()
	{
		int a[20],i,n;
		printf("\n Enter size of array");
		scanf("%d",&n);
		
		printf("\n Enter %d elements:",n);
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
		printf("\n Entered %d elements are...:",n);
		Print(a,0,n);
	}
