//PRINT ELIGIBLE FOR VOTE OR NOT BY WITHOUT RETURN TYPE WITH ARGUMENTS.

#include<stdio.h>
void vote(int);
main()
{
	int a;
	printf("Enter the age :");
	scanf("%d",&a);
	vote(a);
}
void vote(int a)
{
	if(a>18)
	printf("%d you are elegible for vote.",a);
	else
	printf("%d you are not eligible for vote.",a);
}
