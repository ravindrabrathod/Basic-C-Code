// PRINT GREATEST NUMBER OF 10 NUMBER OR N NUMBERS 

#include<stdio.h>
#define SIZE 10
main()
{
	int arr[SIZE],i,greatest;
	
	for(i=0;i<SIZE;i++)
	{
		printf("Enter the elements :");
	scanf("%d",&arr[i]);
	greatest=arr[0];
	}
	for(i=0;i<SIZE;i++)
	{
	 if (greatest<arr[i])
	 greatest=arr[i];	
    }
	printf("%d is greatest\n",greatest);
	
}
