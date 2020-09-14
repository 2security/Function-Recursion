#include<stdio.h>
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
		int m,n,i;
		printf("\n Enter the range(m n):");
		scanf("%d%d",&m,&n);
		
		printf("\n Perfect numbers between %d and %d are:",m,n);
		for(i=m;i<=n;i++)
			{
			if(checkPerfect(i))		
				printf("%d ",i);
			}
			
		printf("\n\n");
		return 0;
	}
