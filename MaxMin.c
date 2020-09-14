#include<stdio.h>

int Max(int a[],int size)
{
    static int i = 0, max =- 9999;  // static int max=a[0] is invalid
    if(i < size)   // till the last element
    {
        if(max < a[i])
        max = a[i];

        i++;    // to check the next element in the next iteration
        Max(a,size);   // recursive call
    }
    return max;
}
int Min(int a[],int size)
{
    static int i = 0, min=999999999;  // static int max=a[0] is invalid
    if(i < size)   // till the last element
    {
        if(min > a[i])
        min = a[i];

        i++;    // to check the next element in the next iteration
        Min(a,size);   // recursive call
    }
    return min;
}
int main() 
	{
	int arr[20],i,n;
	
	printf("\n Enter size");
	scanf("%d",&n);
	
	printf("Enter %d elements",n);
	for(i=0;i<n;i++)	
	scanf("%d",&arr[i]);
	
	printf("\n Max=%d ",Max(arr,n));
	printf("\n Min=%d ",Min(arr,n));
	return 0;
	}

