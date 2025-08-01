// Program to print the value and address of the elements of an array
#include<stdio.h>
main()
{
int a[5]={1,2,3,4,5};
int i;
for(i=0;i<5;i++)
{
	printf("Value of a[%d]= %d\t",i,a[i]);
	printf("Adress of a[%d] = %d \n",i,&a[i]);
}
}
