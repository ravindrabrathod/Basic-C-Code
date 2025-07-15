//PRINT LEAP YEAR BY WITHOUT RETURN TYPE WITH ARGUMENTS.
#include<stdio.h>
void leapyear(int);
main()
{
	int a;
	printf("Enter the year :");
	scanf("%d",&a);
	leapyear(a);
}
void leapyear(int a)
{
	if(a%4==0||a%100==0||a%400==0)
	printf("%d is leap year.",a);
	else
	printf("%d is not a leap year.",a);
	
	// Also we can write in this formate
	
//	if(a%4==0)
//	printf("%d is leap year.",a);
//	else if(a%100==0)
//	printf("%d is leap year.",a);
//	else if(a%400==0)
//	printf("%d is leap year.",a);
//	else
//	printf("%d is not leap year.",a);
	
}
