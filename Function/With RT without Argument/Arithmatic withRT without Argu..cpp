//PRINT ARITHMATIC CALCULATION USING WITH RETURN TYPE WITHOUT ARGUMENT

#include<stdio.h>  
float sum();
float sub();
float multi();
float divide();
int main()
{
	printf("%f\n",sum());
	printf("%f\n",sub());
	printf("f\n",multi());
	printf("%f\n",divide());
}
float sum()
{
	int a;
	float b;
	printf("Enter the num a&b :");
	scanf("%d%f",&a,&b);
	return a+b;
}
float sub()
{
	int a;
	float b;
	printf("Enter the num a&b :");
	scanf("%d%f",&a,&b);
	return a-b;
}
float multi()
{
	int a;
	float b;
	printf("Enter the num a&b :");
	scanf("%d%f",&a,&b);
	return a*b;
}
float divide()
{
	int a;
	float b;
	printf("Enter the num a&b :");
	scanf("%d%f",&a,&b);
	return a/b;
}

