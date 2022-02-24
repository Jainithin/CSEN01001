#include<stdio.h>
int main()
{
	int n,N,p,q=0;
	printf("enter a number =");
	scanf ("%d",&n);
	N=n;
	while(N>0)
	{
	 p=N%10;
	 q=q+(p*p*p*p);
	 N=N/10;	
	}
	if (n==q)
	printf("The given number is arm strong number");
	else
	printf("the given number is not a arm strong number");
}