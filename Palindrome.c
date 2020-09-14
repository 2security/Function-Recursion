#include<stdio.h>
int Palindrome(int n)
	{
	int m=n,r;
	static int rev=0;
	if(n>0)
		{
		r=n%10;
		rev=r+rev*10;
		Palindrome(n/10);
		}
	if(rev==m)
		return 1;
	else 
		return 0;			
	}
int main()
	{
	int n;

	printf("Enter the number");
	scanf("%d",&n);
	
	if(Palindrome(n))
		printf("%d is palindrome number",n);
	else
		printf("%d is not palindrome number",n);

	return 0;
	}
	
