// CALL BY VALUE 
#include<stdio.h>
void fun(int);
int main()
{
  int a=7;
  printf("before calling a function a= %d\n",a);
  fun(a);
  printf("After calling a function a= %d\n",a);
}
void fun(int a)
{
	a++;
	printf("In function a= %d\n",a);
}
