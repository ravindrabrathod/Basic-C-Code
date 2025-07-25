// MULTIPLICATION OF TWO MATRIX IN 2-D ARRAY
#include<stdio.h>
int main ()
{
	int a[20][20],b[20][20],d[20][20],i,j,k,R,C,R1,C1;
	printf("Enter the Row and column :\n");
	scanf("%d%d",&R,&C);
	printf("Enter the first matrix :\n");
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
		    printf("Enter a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the Row 1 and column 1:\n");
	 scanf("%d%d",&R1,&C1);
	printf("Enter the second matrix :\n");
	for(i=0;i<R1;i++)
	{
		for(j=0;j<C1;j++)
		{
		    printf("Enter b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		}
	}
 	printf("The first matrix is :\n");
 	for(i=0;i<R;i++)
 	{
 		for(j=0;j<C;j++)
 		{
 			printf("%d\t",a[i][j]);
 		}
 		printf("\n");
 	}
 	printf("The second matrix is :\n");
 	for(i=0;i<R1;i++)
 	{
 		for(j=0;j<C1;j++)
 		{
 			printf("%d\t",b[i][j]);
 		}
 		printf("\n");
 	}
	if(C==R1)
	{
	 
	 printf("The multiplication of 1 & 2 matrix is :\n");
	 for(i=0;i<R;i++)
	 {
	 	for(j=0;j<C1;j++)
	 	{
	 		d[i][j]=0;
	 		for(k=0;k<C;k++)
	 		{
	 			d[i][j]+=a[i][k]*b[k][j];
		    }
			 printf("%d\t",d[i][j]);
		 }
		 printf("\n");
	 }
    }
    else
    {
    	printf("Multiplication not possible :\n");
	}
	
}
