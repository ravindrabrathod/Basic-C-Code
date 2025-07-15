//PRINT PRIME NUMBER WITHOUT RETURN TYPE WITH ARGUMENTS

#include<stdio.h>
void prime(int);
main()
{
	int a;
	printf("Enter the num :");
	scanf("%d",&a);
	prime(a);
}
void prime(int a)
{
	int i,count=0;
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
{
	count ++;
}}
	if (count==2)
	
	printf("%d is prime number.",a);
	else
	printf("%d is not prime number.",a);
}
