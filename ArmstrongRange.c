#include<stdio.h>
#include<math.h>
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
int main()
	{
		int m,n,i;
		printf("\n Enter the range(m n):");
		scanf("%d%d",&m,&n);
		
		printf("\n Armstrong numbers between %d and %d are:",m,n);
		for(i=m;i<=n;i++)
			{
			if(checkArmstrong(i))		
				printf("%d ",i);
			}
			
		printf("\n\n");
		return 0;
	}
