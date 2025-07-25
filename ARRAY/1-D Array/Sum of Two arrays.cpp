// WAP TO READ THE ARRAYS OF SIZE 5 & STORE SUM OF THESE ARRAY INTONTHIRD ARRAY

#include<stdio.h>
main()
{
	int a[5],b[5],c[5],i;
	printf("Enter the number :");
	
	for(i=0;i<5;i++)
		scanf("%d",&a[i]); 
		printf("Enter the number :");
		
	for(i=0;i<5;i++)
		scanf("%d",&b[i]);
		
	for(i=0;i<5;i++)
	{
		c[i]=a[i]+b[i];	  
		printf("%d\n",c[i]);
    }
}
