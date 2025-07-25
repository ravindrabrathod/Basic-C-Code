// WRITE A PRODGRAM TO READ AN ARRAY OF 10 INTEGER & COUNT NO.OF EVEN & ODD

#include<stdio.h>
main()
{
	int a[10],i,count=0,count1=0;
	printf("Enter the number :");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		count++;
		else
		count1++;
	}
	printf("Even=%d\n",count);
	printf("Odd=%d",count1);
}
