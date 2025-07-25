// WAP TO PRINT REVERSE OF ARRAYS ELEMENTS

#include<stdio.h>

main()
{
	int a[5],i,j;
	for(i=0;i<=5;i++)
	{
		printf("Enter the number :");
		scanf("%d",&a[i]);
	}
	for(j=5;j>=0;j--)
	{
		printf("%d",a[j]);
	}
}
