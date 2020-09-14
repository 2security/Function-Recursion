#include<stdio.h>
int checkEvenOdd(int n)
	{
		if(n%2==0)
			return 1;
		else
			return 0;
	}
int main()
	{
		int n;
		printf("\n Enter a number: ");
		scanf("%d",&n);
		if(checkEvenOdd(n))
			printf("\n %d is even number",n);
		else
			printf("\n %d is odd number",n);
			
		printf("\n\n");
		return 0;
	}
