// WRITE A PRODGRAM TO READ MARKS OF 5 STUDENT CALCULATE SUM & AVERAGE USING ARRAYS 

#include<stdio.h>
 main()
{
	int a[5],i,sum=0;
	float avg;
	printf("Enter the marks :");
	for(i=0;i<5;i++)
	{
		scanf("%d ",&a[i]);
    	sum=sum+a[i];
    	printf("%d \n",sum);

	}
     avg=sum/5;
   for(i=0;i<5;i++)
	{  
  printf("%f",avg);
}
}
