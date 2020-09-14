#include<stdio.h>
#include<math.h>
int checkPrime(int n)
	{
	int i,flag=0;
	for(i=2;i<=n/2;i++)
		{
		if(n%i==0)
			{
			flag=1;
			break;	
			}
		}
	if(flag==0&&n!=1)
		return 1;
	else
		return 0;
	}
int checkArmstrong(int n)
	{
	int d,m,sum=0,r;
	d=ceil(log10(n));
	m=n;
	while(n>0)
		{
		r=n%10;
		sum=sum+pow(r,d);
		n=n/10;
		}
	
	if(sum==m)
		return 1;
	else
		return 0;
	}
int checkPerfect(int n)
	{
	int i,sum=0;
	
	for(i=1;i<=n/2;i++)
		{
		if(n%i==0)
			sum=sum+i;			
		}
	if(sum==n)
		return 1;
	else
		return 0;
	}
int main()
	{
		int n;
		printf("\n Enter a number to check prime or not: ");
		scanf("%d",&n);
		if(checkPrime(n))
			printf("\n %d is prime number",n);
		else
			printf("\n %d is not prime number",n);
		
		printf("\n Enter a number to check perfect or not: ");
		scanf("%d",&n);
		if(checkPerfect(n))
			printf("\n %d is perfect number",n);
		else
			printf("\n %d is not perfect number",n);
		
		printf("\n Enter a number to check primeArmstrong or not: ");
		scanf("%d",&n);
		if(checkArmstrong(n))
			printf("\n %d is armstrong number",n);
		else
			printf("\n %d is not armstrong number",n);
			
		printf("\n\n");
		return 0;
	}
