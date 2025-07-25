//WAP TO READ & PRINT SUM OF INDIVIDUAL ROW & COL0MN
#include<stdio.h>
main()
{
  int a[3][3],i,j,sumrow,sumcol;
  printf("Enter the matrix elements :");
  for(i=0;i<3;i++)
  {
  	for(j=0;j<3;j++)
  	{
  		scanf("%d",&a[i][j]);
	  }
  }	
	  for(i=0;i<3;i++)
	  {
	  	for(j=0;j<3;j++)
	  	{
	  		printf("%d ",a[i][j]);
		}
		  printf("\n");
	  }
	  for(i=0;i<3;i++)
	  {
	  	sumrow=sumcol=0;
	  	for(j=0;j<3;j++)
	  	{
	  	sumrow+=a[i][j];
	  	sumcol+=a[j][i];
	    }
	    printf("rows  = %d\t,column = %d\n",sumrow,sumcol);
	  }
	  
//	  printf("\n");
}
