#include<stdio.h>
int EvenOdd(int m,int n)
	{
		if(m>n)
			return 0;
			
		return m+EvenOdd(m+2,n);
	}
int main()
	{
		int i,m,n;
		printf("\n Enter the range");
		scanf("%d%d",&m,&n);
		printf("Sum of Even/Odd numbers is:=%d\n",EvenOdd(m,n));
		
		printf("\n\n");
		return 0;
	}

