#include<stdio.h>
int fibo(int n)
	{
		if(n==1||n==2)
			return 1;
		else
			return fibo(n-1)+fibo(n-2);
	}
int main()
	{
	int n;

	printf("\n Enter the number");
	scanf("%d",&n);

	printf("\n %d th fibonacci number is=%d",n,fibo(n));
	return 0;
	}
	
