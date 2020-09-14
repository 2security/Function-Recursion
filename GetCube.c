#include<stdio.h>
int GetCube(int n)
	{
		return n*n*n;
	}
int main()
	{
		int n;
		printf("\n Enter the number:");
		scanf("%d",&n);
		
		printf("\n Cube of %d is=%d",n,GetCube(n));
		
		printf("\n\n");
		return 0;
		
	}
