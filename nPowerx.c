#include<stdio.h>
int Power(int n,int x)
	{
	if(n==0)
		return 0;
	else if(x==0)
		return 1;
	else
		return n*Power(n,x-1);
	}
int main()
	{
	int n,x;

	printf("Enter base number");
	scanf("%d",&n);

	printf("Enter factor number");
	scanf("%d",&x);

	printf("%d^%d=%d\n",n,x,Power(n,x));
	
	return 0;
	}
	


