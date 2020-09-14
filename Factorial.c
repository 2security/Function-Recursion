#include<stdio.h>
int fact(int n)
	{
		if(n==0)
			return 1;
		else
			return n*fact(n-1);
	}
int main()
	{
	int n;

	printf("\n Enter the number");
	scanf("%d",&n);

	printf("\n Factorial(%d)=%d",n,fact(n));
	return 0;
	}
	
