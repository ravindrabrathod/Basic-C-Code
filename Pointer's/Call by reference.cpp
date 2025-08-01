// Call by referance
#include<stdio.h>
void fun(int *a,int *b)
{
	*a=9;
	*b=10;
	printf("In function a=%d\tb=%d\n",*a,*b);
}
int main()
{
	int a=5,b=8;
	printf("before call a=%d\tb=%d\n",a,b);
	fun(&a,&b);
	printf("after a calling a=%d\tb=%d\n",a,b);
}
