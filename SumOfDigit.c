#include<stdio.h>
int Sum(int n)
	{
		if(n>0)
			return n%10+Sum(n/10);
		else
			return 0;
	}
int main()
	{
	int n;

	printf("Enter the number");
	scanf("%d",&n);

	printf("\n Sum of digit of %d is= %d",n,Sum(n));
	return 0;
	}
	
