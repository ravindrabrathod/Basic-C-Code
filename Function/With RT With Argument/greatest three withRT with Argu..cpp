// PRINT GREATEST THREE NUMBER USING WITH RETURN TYPE WITH ARGUMENTS 

#include<stdio.h> 
int greatest(int,int,int);
int main()
{
	int a,b,c,d;
	printf("Enter the numbers a,b&c :");
	scanf("%d%d%d",&a,&b,&c);
	d=greatest(a,b,c);
	printf("%d is greatest",d);
}
int greatest(int a,int b,int c)
{
	return a>b?(a>c?a:c):(b>c?b:c);
}
