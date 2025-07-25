// FLOAT SUBTRACTION OF TWO MATRIX IN ONE BY USING 2-D ARRAY
#include<stdio.h>
main()
{
	float a[20][20],b[20][20],c[20][20];
	int row,column,i,j;
	printf("Enter the row & column :");
	scanf("%d%d",&row,&column);
	printf("The first matrix :\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("a[%d][%d] : ",i,j);
			scanf("%f",&a[i][j]);
		}
	}
	printf("The second matrix :\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("b[%d][%d] : ",i,j);
			scanf("%f",&b[i][j]);
		}
	}
	printf("first matrix :\n");
		for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
		printf("%.2f\t",a[i][j]);
		}
		printf("\n");
	}
		printf("second matrix :\n");
		for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
		printf("%.2f\t",b[i][j]);
		}
		printf("\n");
	}
	printf("Subtraction of first & second :\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			c[i][j]=a[i][j]-b[i][j];
			printf("%.2f\t",c[i][j]);
		}
		printf("\n");
	}
}
