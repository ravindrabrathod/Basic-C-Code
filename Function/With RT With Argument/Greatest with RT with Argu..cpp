//PRINT ARITHMATIC CALCULATION USING FUNCTION

#include<stdio.h>  //WITH RT WITH ARGUMENT
float sum(int,float);
float sub(int,float);
float multi(int,float);
float divide(int,float);
int a;
float b;

int main()
{
//	int a;
//	float b;
	printf("Enter the num a&b :");
	scanf("%d%f",&a,&b);
	printf("%f\n",sum(a,b));
	
//	int a;
//	float b;
	printf("Enter the num a&b :");
	scanf("%d%f",&a,&b);
	printf("%f\n",sub(a,b));
	
//	int a;
//	float b;
	printf("Enter the num a&b :");
	scanf("%d%f",&a,&b);
	printf("f\n",multi(a,b));
	
//	int a;
//	float b;
	printf("Enter the num a&b :");
	scanf("%d%f",&a,&b);
	printf("%f\n",divide(a,b));
}
float sum(int a,float b)
{
	
	return a+b;
}
float sub(int a,float b)
{
	
	return a-b;
}
float multi(int a,float b)
{
	
	return a*b;
}
float divide(int a,float b)
{
	
	return a/b;
}

