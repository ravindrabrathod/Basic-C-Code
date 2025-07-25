// WRITE A PROGRAM TO PRINT MATRIX AND SUM OF THAT HOLE MATRIX
#include<stdio.h>
main ()
{
 int a[3][3],i,j,sum=0;
 printf("Enter the row & column :");
 for(i=0;i<3;i++)
 {
 	for(j=0;j<3;j++)
 	{
 		scanf("%d",&a[i][j]);
	}                                                                                                        
 }	
 printf("\nThe matrix is (3*3) :\n\n");
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		printf("%d\t",a[i][j]);
    		sum=sum+a[i][j];
		}
		printf("\n");
	}
	printf("\nTotal sum of matrix = %d\n",sum);
}
