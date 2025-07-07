//PRINT POSITIVE NEGATIVE NUMBER WITHOUT RETURN TYPE WITH ARGUMENTS
#include<stdio.h>
void positive(int);
main()
{
	int a;
	printf("Enter the num :");
	scanf("%d",&a);
	positive(a);
}
void positive(int a)
{
	if(a>0)
		printf("%d is positive.",a);
		else
		printf("%d is negative.",a);
}
