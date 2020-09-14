#include<stdio.h>
int Sum(int n)
	{
		static int sum=0;
		if(n>0)
			{
				sum=sum+n;
				return Sum(n-1);
			}
		return sum;
	}
int main()
	{
	int n;
	printf("Enter number of terms");
	scanf("%d",&n);
	printf("Sum of terms upto %d is:=%d\n",n,Sum(n));
	return 0;
	}
	
