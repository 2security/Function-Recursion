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

int main()
	{
		int m,n,i;
		printf("\n Enter the range(m n):");
		scanf("%d%d",&m,&n);
		
		printf("\n Prime numbers between %d and %d are:",m,n);
		for(i=m;i<=n;i++)
			{
			if(checkPrime(i))		
				printf("%d ",i);
			}
			
		printf("\n\n");
		return 0;
	}
