// PRINT AVERAGE OF +VE INTEGER USING WITH RETURN TYPE WITH ARGUMENTS 
#include<stdio.h>
int average(int);
main()
{
	int a;
	printf("Enter the number :");
	scanf("%d",&a);
	printf("%d",average(a));
}
int average(int a)
{
	int b,i,sum=0;
	printf("Enter the number :");
	scanf("%d",&b);
	for(i=0;i<a;i++)
	{
		if(b<0)
		{
			printf("you Entered negative number.");
		}
		sum=sum+b;
    }
    
	int avg=sum/a;
	return avg;
}

