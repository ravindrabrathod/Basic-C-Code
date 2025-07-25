// PRINT SMALLEST AND GREATEST NUMBER OF 10 NUMBER OR N NUMBERS 
#include<stdio.h>
#define SIZE 10
int main()
{
	int arr[SIZE],i,smallest,greatest;
	for(i=0;i<SIZE;i++)
	{
		printf("Enter the number :");
		scanf("%d",&arr[i]);
		smallest=arr[0];
		greatest=arr[0];
	}
	for(i=0;i<SIZE;i++)
	{
		if(smallest>arr[i])
		smallest=arr[i];		
	//	if(greatest<arr[i])
	else
		greatest=arr[i];
	}
	printf("%d is smallest\n",smallest);	
	printf("%d is greatest",greatest);	
	
//	for(i=0;i<SIZE;i++)
//	{
//		greatest=arr[0];
//		if(greatest<arr[i])
//		greatest=arr[i];
//	}
//	printf("%d is greatest",greatest);
}
