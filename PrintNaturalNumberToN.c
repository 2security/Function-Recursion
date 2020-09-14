#include<stdio.h>
int Print(int m,int n)
	{
		if(m>n)
			return;
		printf("%d ",m);
		Print(m+1,n);
	}
int main()
	{
		int i,m,n;
		printf("\n Enter the range");
		scanf("%d%d",&m,&n);
		Print(m,n);
		
		printf("\n\n");
		return 0;
	}

