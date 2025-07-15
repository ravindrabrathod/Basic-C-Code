// READ 2-DIMENTIONAL MATRIX ARRAY 
#include<stdio.h>
main()
{
	int a[3][3],i,j,R=3,C=3;
	 printf("Enter the Rows & COlumns :");
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
		scanf("%d",&a[i][j]);
	    }
	}
	printf("The Matrix is :\n");
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
		printf("%d\t",a[i][j]);
		
        } 
        printf("\n");
    }
}
