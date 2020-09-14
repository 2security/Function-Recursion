#include<stdio.h>
int GCD(int m,int n)
	{
	if(n==0)
		return m;
	else
		return GCD(n,m%n);
	}

int main() 
	{
	int m,n,r;
	
	printf("Enter two number");
	scanf("%d%d",&m,&n);
	
	r=GCD(m,n);
	
	printf("GCD of %d %d is=%d",m,n,r);
	printf("\nLCM of %d %d is=%d",m,n,m*n/r);
	return 0;
	}

