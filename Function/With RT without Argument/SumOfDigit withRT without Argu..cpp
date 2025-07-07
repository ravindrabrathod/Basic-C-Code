//SUM OF DIGITS BY USING WITH RETURN TYPE & WITHOUT ARGUMENT

#include<stdio.h>
int sumofdigit();
main()
{
printf("%d",sumofdigit());	
}
int sumofdigit()
{
	int a,sum;
	printf("Enter a num :");
	scanf("%d",&a);
	while(a>0)
	{
	sum=sum+a%10;
	a/=10;	
	}
	return sum;
}
