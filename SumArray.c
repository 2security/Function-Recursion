#include<stdio.h>
int sum(int arr[],int s,int n)
	{
		if(s>n)
			return 0 ;
		else
			return arr[s]+sum(arr,s+1,n);
	}
int main()
	{
		int a[20],i,n;
		printf("\n Enter size of array");
		scanf("%d",&n);
		
		printf("\n Enter %d elements:",n);
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
		printf("\n Sum=:%d",sum(a,0,n));
		return 0;
	}
