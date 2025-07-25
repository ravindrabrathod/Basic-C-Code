//SUBTRACTION OF TWO MATRIX IN ONE BY USING 2-D ARRAY
#include<stdio.h>
int main()
{
	int a[20][20],b[20][20],c[20][20],i,j,row,column;
	printf("Enter the row & column :");
	scanf("%d%d",&row,&column);
	printf("The first matrix :\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("The second matrix :\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("b[%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("first matrix :\n");
		for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
		printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
		printf("second matrix :\n");
		for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
		printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	printf("Subtraction of first & second :\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			c[i][j]=a[i][j]-b[i][j];
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}
