// WAP TO PRINT DESCENDING ORDER IN ARRAYS 

#include<stdio.h>
#define SIZE 10
main()
{
	int a[SIZE],i,j,temp;
	for(i=0;i<SIZE;i++)
	{
		printf("Enter the number :");
		scanf("%d",&a[i]);
	}
	for(i=0;i<SIZE;i++)
	{
		for(j=i+1;j<SIZE;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<SIZE;i++)
	{
		printf("%d\n",a[i]);
	}
}
