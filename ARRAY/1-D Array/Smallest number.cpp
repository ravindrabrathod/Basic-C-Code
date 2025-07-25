// PRINT SMALLEST NUMBER OF 10 NUMBER OR N NUMBERS 

#include<stdio.h>
#define SIZE 10
int main()
{
	int a[SIZE],i,smallest;
	for(i=0;i<SIZE;i++)
	{
		printf("Enter the number :");
		scanf("%d",&a[i]);
		smallest=a[0];
	}
	for(i=0;i<SIZE;i++)
	{
		if(smallest>a[i])
		smallest=a[i];
	}
	printf("%d is smallest\n",smallest);
}
