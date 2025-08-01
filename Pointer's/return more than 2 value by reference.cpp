// Program to show how to return more than one value from a function using call by reference 
#include<stdio.h>
void fun(int,int,int*,int*,int*,int*);
int main()
{
	int a=10,b=5,sum,diff,multi,divide;
	fun(a,b,&sum,&diff,&multi,&divide);
	printf("a=%d  \n  b=%d  \n  sum=%d  \n  diff=%d  \n  multi=%d  \n  divide=%d ",a,b,sum,diff,multi,divide);
}
void fun(int a,int b,int* sum,int*diff,int*multi,int*divide)
{
	a=20;
	b=10;
	*sum=a+b;
	*diff=a-b;
	*multi=a*b;
	*divide=a/b;
}
