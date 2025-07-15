// PRINT SUM OF DIGITS USING WITH RETURN TYPE WITH ARGUMENTS 

#include<stdio.h>
int integer(int);
main()
{
	int a,b;
	printf("Enter the number :");
	scanf("%d",&a);
	b=integer(a);
	printf("%d",b);
}
int integer(int a)
{
	int sum=0;
	while(a>0)
	{
	
		sum=sum+a%10;
		a/=10;
	}
	return sum;
}

