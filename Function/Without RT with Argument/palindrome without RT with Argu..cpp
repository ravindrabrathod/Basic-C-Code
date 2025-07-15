//PRINT PALINDROME NUMBER BY WITHOUT RETURN TYPE WITH ARGUMENTS.

#include<stdio.h>
void palindrome(int);
int main()
{
	int a;
	printf("Enter the number :");
	scanf("%d",&a);
	palindrome(a);
	
}
void palindrome(int a)
{
	int sum=0,temp=a;
	while(a!=0)
	{
		sum=sum*10+a%10;
		a/=10;
	}
	a=temp;
	if(a==sum)
	printf("%d is palindrome",a);
	else
	printf("%d is Not palindrome",a);
}
