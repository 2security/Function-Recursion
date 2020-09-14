#include<stdio.h>
#include<math.h>
int checkStrong(int n)
	{
		int i,m,fact,r,sum=0;
		m=n;
		while(n>0)
			{
			r=n%10;
			fact=1;
			for(i=1;i<=r;i++)
				fact=fact*i;
			sum=sum+fact;
			n=n/10;
			}
		if(sum==m)
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
			if(checkStrong(i))		
				printf("%d ",i);
			}
			
		printf("\n\n");
		return 0;
	}
