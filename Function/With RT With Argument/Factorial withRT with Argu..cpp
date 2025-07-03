
// PRINT FACTORIAL USING WITH RETURN TYPE WITH ARGUMENTS 

#include<stdio.h>
int factorial(int);
main()
{
	int a,b;
	printf("Enter the number :");
	scanf("%d",&a);
//	b=factorial(a);
	printf("%d",factorial(a));
}
int factorial(int a)
{
	int i,f=1;
	for (i=1;i<=a;i++)	
		f=f*i;
	return f;
}

