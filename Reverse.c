#include<stdio.h>
int Reverse(int n)
	{
		int r;
		static int rev=0;
		if(n>0)
			{
				r=n%10;
				rev=r+rev*10;
				Reverse(n/10);
			}
			
		return rev;
	}
int main()
	{
		int n;
		printf("\n Enter the number");
		scanf("%d",&n);
		printf("\n Reverse is:=%d\n",Reverse(n));
		
		printf("\n\n");
		return 0;
	}

